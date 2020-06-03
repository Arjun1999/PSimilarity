import ast
import sys
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

filename = sys.argv[2]
input_tree = mutate(filename)
ast_print(input_tree)

level0 = sorted(level0)
level1 = sorted(level1)
level2 = sorted(level2)

program_number1 = sys.argv[1]

filename_prognum = "program"+program_number1


output_file_lev0 = open((filename_prognum+"_lev0.txt"), "w")
for i in range(len(level0)):
    output_file_lev0.write(level0[i])
    output_file_lev0.write('\n')

output_file_lev1 = open((filename_prognum+"_lev1.txt"), "w")
for i in range(len(level1)):
    output_file_lev1.write(level1[i])
    output_file_lev1.write('\n')

output_file_lev2 = open((filename_prognum+"_lev2.txt"), "w")
for i in range(len(level2)):
    output_file_lev2.write(level2[i])
    output_file_lev2.write('\n')

# print("LEVEL0 = ", level0)
# print("LEVEL1 = ", level1)
# print("LEVEL2 = ", level2)
