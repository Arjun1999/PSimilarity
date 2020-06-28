# Enter your code here. Read input from STDIN. Print output to STDOUT
n = int(raw_input())
n = max(1, min(20, n))
i = 0

for i in range(0,n):
    print pow(i,2)