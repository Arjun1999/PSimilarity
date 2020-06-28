# Enter your code here. Read input from STDIN. Print output to STDOUT
num = int(raw_input())

if num >= 1 and num <=20:
    for i in range(0, num):
        print(i **2)