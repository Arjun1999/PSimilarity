import ast_explore

int_list =[]
float_list=[]
char_list=[]
str_list=[]
Map = {}

# global vars reqired to compute the values of the calls
gnode1 = None
gnode2 = None
# flags required for the completion of the loops internally
done = False

def addtovarlist(var_type,var_name,corr_list):
    if(var_type=="int"):
        int_list.append(var_name)
    elif(var_type=="float"):
        float_list.append(var_name)
    elif(var_type=="char"):
        char_list.append(var_name)
    elif(var_type=="str"):
        str_list.append(var_name)
    corr_list.append(var_name)

def permute(l1,l2, l, r): 
    # this function's idea is inspired from the printing of all the possible permudation sourced from the link below (from the python tab)
    # https://www.geeksforgeeks.org/write-a-c-program-to-print-all-permutations-of-a-given-string/
    global done,Map
    if l==r: 
        Map = dict(zip(l2,l1))
        if(checkWithReplacedArgs(None,None,True)):
            done = True
    else: 
        done = False
        for i in xrange(l,r+1): 
            l2[l], l2[i] = l2[i], l2[l] 
            permute(l1, l2, l+1, r) 
            if(done == True):
                break
            l2[l], l2[i] = l2[i], l2[l] # backtrack 

def getVars(node,corr_list):
    for subnode in node:
        getVars(subnode,corr_list)
    #print (node.__class__.__name__=="TypeDecl")
    if(node.__class__.__name__=="Decl"):
        p =getattr(node,"type")
        if(p.__class__.__name__=="TypeDecl"):
            var_name = getattr(p,"declname")
            var_type = getattr(getattr(p,"type"),"names")[0]
            # print (var_type,var_name)
            addtovarlist(var_type,var_name,corr_list)

def visit(node):
    # print(node.__dict__)
    # print(dir(node))---- to get all the attributes referenced in an object
    # print(getattr(node,'name',"NotFound"))
    # print(node.__class__.__name__)+(node.getattr())
    print(node.attr_names)
    print("\n\n\n\n\n\n\n")

def printfn(ast):
    for n in ast:
        printfn(n)
    visit(ast)

def ReplaceAttrMatch(n1,n2):
    attrs1 = list(n1.attr_names)
    attrs2 = list(n2.attr_names)
    for attr in attrs1:
        if(attr == "name" or attr == "declname"):
            # if(n1.__class__.__name__ == n2.__class__.__name__ == "ID"):
                if(attr in attrs2):
                    attrs2.remove(attr)
                    if(getattr(n2,attr) in Map):
                        if(Map[getattr(n2,attr)]==getattr(n1,attr)):
                            continue
                        else:
                            return False
                    elif (getattr(n1,attr)==getattr(n2,attr)):
                        continue
                    else:
                        return False
                else:
                    return False
        elif attr in attrs2:
            attrs2.remove(attr)
            if not(getattr(n1,attr)==getattr(n2,attr)):
                return False
        else:
            return False
    if not (attrs2 == []):
        return False
    return True

        

def AttrMatch(n1,n2):
    attrs1 = list(n1.attr_names)
    attrs2 = list(n2.attr_names)
    for attr in attrs1:
        if attr in attrs2:
            attrs2.remove(attr)
            if not(getattr(n1,attr)==getattr(n2,attr)):
                return False
        else:
            return False
    if not (attrs2 == []):
        return False
    return True

def equalNodes(n1,n2,MatchAlgo):
    if(MatchAlgo(n1,n2) == False):
        return False
    for subnode in n1:
        if (Contains(subnode,n2,MatchAlgo) == False):
            # print("\n")
            # print(subnode)
            return False
    return True

def Contains(node,tree,MatchAlgo):
    for subnode in tree:
        if(equalNodes(node,subnode,MatchAlgo)==True):
            return True
    # print("THe Candidate:\n")
    # print(i)
    return False

def Has(node1,node2,MatchAlgo):
    for i in node1:
        if(Contains(i,node2,MatchAlgo)==False):
            # print(i)
            # print("\n\n")
            # print(node2)
            return False
    return True

def checkWithReplacedArgs(node1,node2,hasrun=False):
    global gnode1,gnode2
    if not (hasrun):
        l1 = []
        l2 = []
        getVars(node1,l1)
        getVars(node2,l2)
        gnode1 = node1
        gnode2 = node2
        if(len(l1)<len(l2)):
            for i in range(0,len(l2)-len(l1)):
                l1.append(None)
            permute(l1,l2,0,len(l2)-1)
        else:
            for i in range(0,len(l1)-len(l2)):
                l2.append(None)
            permute(l1,l2,0,len(l2)-1)
    result = Has(gnode1,gnode2,ReplaceAttrMatch)
    # print(Map,result)
    return result

def exactCheck(node1,node2):
    return Has(node1,node2,AttrMatch)

if __name__ =="__main__":
    ast = ast_explore.getAstOfFile("ex1.c")
    ast2 = ast_explore.getAstOfFile("ex2.c")
    # print(ast)
    print ("Matching after the variables changed : "+str(checkWithReplacedArgs(ast,ast2)))
    # print int_list,float_list,char_list,str_list
    print ("The map for the changed variables : "+str(Map))
    # print("\n\n\n"+"AST2:")
    # print(ast2)
    print("Exactly Matching : "+str(Has(ast,ast2,AttrMatch))) #and Has(ast2,ast))
    # printfn(ast2)
    # ast.show(showcoord=True)


# To get the class type----------- node.__class__.__name__
# NodeVisiter() is a class whose instance can be used to visit the node with all its childs
