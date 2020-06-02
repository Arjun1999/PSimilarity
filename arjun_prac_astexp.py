import ast
stack = []


class a(ast.NodeTransformer):
    def generic_visit(self, node):
        stack.append(ast.dump(node))
    def visit_Num(self, node):
        stack.append(ast.dump(node))
        # ...
        return node

    # ...  # this is all the other visit_*() functions

    def visit_Str(self, node):
        stack.append(ast.dump(node))
        # ...
        return node


if __name__ == "__main__":
    with open('python_ex1.py', 'r') as pt:
        tree = ast.parse(pt.read())
    new_tree = a()
    # I have tried with and without calling fix_missing_locations and got the same results.
    new_tree_edit = ast.fix_missing_locations(new_tree.generic_visit(tree))
    print (stack)
