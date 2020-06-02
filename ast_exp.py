import ast

# with open("sample1.py", "r") as source_code:
#     tree = ast.parse(source_code.read())
# # ast_gen = ast.parse('sample1.py', mode='eval')
#     print(ast.dump(tree))
list_append=[]
with open("python_ex1.py", "r") as source_code:
    tree = ast.parse(source_code.read())
    i=0
    for node in ast.walk(tree):
        if i==0:
            j=0
            for n in ast.walk(node):
            # ast.dump(node)
# ast_ge       n = ast.parse('sample1.py', mode='eval')
                res=10
                # print(ast.dump(n))
                # if j==0:
                list_append.append(ast.dump(n))
                # else:
                #     break
                # j=j+1
                # print("DUMPINGG")
        elif i>0:
            break
        # print("OUT OF LOOOOOPPPPPPPPPPPPPPPP and ", ast.dump(node))
        # print("DONEEE")
        i=i+1

    # node_visitor = ast.NodeVisitor()
    # print(node_visitor.visit(tree))

print(list_append[7])
import ast
from astor import to_source

# class MyNodeVisitor(ast.NodeVisitor):
#     def visit(self, node):
#         print(node)

class MyVisitor(ast.NodeTransformer):
    # def generic_visit(self, node):
    #     ast.NodeVisitor.generic_visit(self, node)

    # def visit_remove_variable_names(self, node):
    #     if isinstance(node, ast.Num):
    #         node_new = ast.Num(id='int_id')
    #         ast.copy_location(node_new, node)
    #         # ast.NodeVisitor.generic_visit(self, node_new)
    #         return node_new
    #     return node

#    def visit_Name(self, node):
#         if(isinstance(node, ast.Name)):
#             result = ast.Name(id='var_name')
#             return ast.copy_location(result, node)
#         return node

    def visit_Name(self, node):
        if(isinstance(node, ast.Name)):
            result = ast.Name(id='x')
            return ast.copy_location(result, node)
        return node



def mutate(filename):
    file = open(filename)
    contents = file.read()
    parsed = ast.parse(contents)
    nodeVisitor = MyVisitor()
    # Capture the new AST.
    transformed = nodeVisitor.visit(parsed)
    # print(transformed)
    return (ast.dump(ast.parse(to_source(transformed))))

def traverse(filename):
    file = open(filename)
    contents = file.read()
    parsed = ast.parse(contents)
    nodeTraverse = MyNodeVisitor()
    traversal = nodeTraverse.visit(parsed)


# traverse('sample2.py')
# tree = mutate('sample2.py')

# print(tree)