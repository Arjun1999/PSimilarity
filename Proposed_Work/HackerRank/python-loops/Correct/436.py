# Enter your code here. Read input from STDIN. Print output to STDOUT

N = raw_input()

if int(N) >= 0 and int(N) < 20:
    for i in range(0,int(N)):
        print i**2
else:
    print ("Please enter a number between 1 & 20")