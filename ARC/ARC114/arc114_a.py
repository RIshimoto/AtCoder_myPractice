import math
N = int(input())
X = list(map(int, input().split()))

def primes(max_number):
    pr = list(range(3, max_number + 1, 2))
    npr = len(pr)
    for i, n in enumerate(pr):
        if n:
            if n * n > max_number:
                break
            for j in range(i + n, npr, n):
                pr[j] = 0
    if max_number >= 2:
        yield 2
    yield from [i for i in pr if i]

lst = list(primes(50))

n = len(lst)
ans = float('inf')
for i in range(1, 2 ** n):
    p = 1
    for j in range(n):
        if ((i >> j) & 1):
            p *= lst[j]
    ok = True
    for x in X:
        if math.gcd(x, p) == 1:
            ok = False
            break
    if ok:
        ans = min(ans, p)
print(ans)
