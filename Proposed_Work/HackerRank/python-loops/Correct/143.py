def loopTestFor(n):
    for i in range(0,n):
        print pow(i,2)

def loopTestWhile(n):
    i = 0
    while (i < n) and (i < 21):
        print pow(i,2)
        i+=1

a = int(raw_input())
loopTestWhile(a)