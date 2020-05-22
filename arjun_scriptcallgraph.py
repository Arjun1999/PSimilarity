file1 = open("output1.dot", "r")
dotfile1 = open("pycallgraph1.dot", "w")

found = 0
for line in file1:
    if (line[:11] == "digraph G {"):
        found += 1
    if(found > 0):
        dotfile1.write(line)

file2 = open("output2.dot", "r")
dotfile2 = open("pycallgraph2.dot", "w")

found = 0
for line in file2:
    if (line[:11] == "digraph G {"):
        found += 1
    if(found > 0):
        dotfile2.write(line)
