import bblfsh

client = bblfsh.BblfshClient("localhost:9432")
# ctx = client.parse("ex1.c")
# print(ctx)

ctx = client.parse("simple.py")
ast = ctx.root
it = ast.iterate(bblfsh.TreeOrder.POSITION_ORDER)
for node in it:
    print(node)
# ast = ctx.get_all()
# print(ctx)
# it = ctx.filter("//python:Call").iterate(bblfsh.TreeOrder.LEVEL_ORDER)
# for node in it:
# print(node)
# it = client.parse("python_ex1.py").iterate(bblfsh.TreeOrder.POST_ORDER)
# for node in it:
#     print(node)
# it = ctx.filter("//*[@role='Number' and @role='Literal']")
# # print(it)
# for node in it:
#     # print internal node:
#     print(node)
    # or get as Python dictionary/value:
    # doSomething(node.get())

# z = next(ctx.filter()).get_int()
# print(z)
# You can also get the non semantic UAST or native AST:
# ctx = client.parse("python_ex1.py", mode=bblfsh.Modes.NATIVE)
# Possible values for Modes: DEFAULT_MODE, NATIVE, PREPROCESSED, ANNOTATED, SEMANTIC

# ast = ctx.get_all()
# print(ast)
