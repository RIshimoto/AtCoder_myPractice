K = int(input())

def divisor(n):
    import math 
    sqn = int(math.sqrt(n))
    x = n
    for i in range(1, sqn+1):
        if x % i == 0:
            yield i, x // i

s = set()
for a, b in divisor(K):
    for c, d in divisor(a):
        s.add(tuple(sorted((b, c, d))))
    for c, d in divisor(b):
        s.add(tuple(sorted((a, c, d))))
print(len(s))
