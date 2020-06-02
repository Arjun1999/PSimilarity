import ast
lst = []
class MyNodeVisitor(ast.NodeVisitor):
    def visit(self, node):
        print(ast.dump(node))
    
    # def generic_visit(self, node):
    #     lst.append(ast.dump(node))
        


def traverse(filename):
    file1 = open(filename)
    contents = file1.read()
    parsed = ast.parse(contents)
    nodeTraverse = MyNodeVisitor()
    traversal = nodeTraverse.generic_visit(parsed)

# with open("python_ex1.py", "r") as source_code:
#     tree = ast.parse(source_code.read())

# print(ast.dump(tree))

traverse('python_ex2.py')
print("lst coming up : ")
