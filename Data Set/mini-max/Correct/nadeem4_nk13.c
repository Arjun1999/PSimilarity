n = list(map(int, input().split()))
s = []
Sum = 0
Sum = sum(n)
for i in range(len(n)):
    temp = Sum
    s.append(temp-n[i])
s = sorted(s)
print(s[0],s[-1])
