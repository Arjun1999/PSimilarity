# Enter your code here. Read input from STDIN. Print output to STDOUT
import sys

n = raw_input()
for i in range(int(n)):
    sys.stdout.write(str(i*i)+'\n')