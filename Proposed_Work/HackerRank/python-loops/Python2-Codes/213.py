# Enter your code here. Read input from STDIN. Print output to STDOUT

user_int = int(raw_input())

if (user_int < 1) or (user_int > 20):
    exit(1)

for i in range(user_int):
    print i*i