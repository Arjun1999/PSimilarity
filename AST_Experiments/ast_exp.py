import ast
from astor import to_source
import zss

# opens the file and generates AST. 
with open("sample2.py", "r") as source_code:
    tree = ast.parse(source_code.read())
    # print(ast.dump(tree))


# To modify the nodes as we traverse the AST
class MyVisitor(ast.NodeTransformer):
   def visit_Name(self, node):
        if(isinstance(node, ast.Name)):
            result = ast.Name(id='x')
            return ast.copy_location(result, node)
        return node


# To perform the above defined modification on the source code of our choice
def removeVariableNames(filename):
    file = open(filename)
    contents = file.read()
    parsed = ast.parse(contents)
    nodeVisitor = MyVisitor()
    transformed = nodeVisitor.visit(parsed)
    return (ast.dump(ast.parse(to_source(transformed))))

tree1 = removeVariableNames('sample1.py')
tree2 = removeVariableNames('sample2.py')

# dist = zss.simple_distance(tree1, tree2)
print(tree1)