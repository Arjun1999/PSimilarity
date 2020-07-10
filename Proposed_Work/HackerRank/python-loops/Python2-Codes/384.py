# Enter your code here. Read input from STDIN. Print output to STDOUT
def power(a):
    return pow(a,2)

N = int(raw_input())
for i in range(0,N):
    print power(i)
