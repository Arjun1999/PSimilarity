import ast
from astor import to_source

class MyNodeTransformer(ast.NodeTransformer):
    def visit_Name(self, node):
        if(isinstance(node, ast.Name)):
            result = ast.Name(id='x')
            return ast.copy_location(result, node)
        return node

def mutate(filename):
    file = open(filename)
    contents = file.read()
    parsed = ast.parse(contents)
    nodeVisitor = MyNodeTransformer()
    transformed = nodeVisitor.visit(parsed)
    return ast.parse(to_source(transformed))

level0 = []
level1 = []
level2 = []
def ast_print(node, level=0):
    if level==0:
        level0.append(ast.dump(node))
    elif level==1:
        level1.append(ast.dump(node))
    elif level==2:
        level2.append(ast.dump(node))
    # print("Level = " + str(level) + '  ' * level + str_node(node))
    for field, value in ast.iter_fields(node):
        if isinstance(value, list):
            for item in value:
                if isinstance(item, ast.AST):
                    ast_print(item, level=level+1)
        elif isinstance(value, ast.AST):
            ast_print(value, level=level+1)

filename = 'sample2.py'
input_tree = mutate(filename)
ast_print(input_tree)

level0 = sorted(level0)
level1 = sorted(level1)
level2 = sorted(level2)

print("LEVEL0 = ", level0)
print("LEVEL1 = ", level1)
print("LEVEL2 = ", level2)