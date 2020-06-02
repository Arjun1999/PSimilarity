import ast

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

file1 = open('sample2.py')
contents1 = file1.read()
parsed1 = ast.parse(contents1)
ast_print(parsed1)
print("LEVEL0 = ", level0)
print("LEVEL1 = ", level1)
print("LEVEL2 = ", level2)