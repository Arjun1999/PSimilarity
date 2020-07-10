def rdint(n=None):
    if n is None:
        return int(raw_input())
    return [rdint() for _ in xrange(n)]

n = rdint()
for i in xrange(n):
    print i * i
