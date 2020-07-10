# Enter your code here. Read input from STDIN. Print output to STDOUT
n = raw_input()
n = int(n)
if (n >= 1 and n <= 20):
    for i in range(0, n):
        print i**2
