from collections import defaultdict
N = int(input())
A = list(map(int, input().split()))


dd = defaultdict(int)
for a in A:
    dd[a] += 1

def primes(n):
    x = n
    sqn = int(n**0.5)
    for i in range(2, sqn+1):
        if x % i == 0:
            yield (i, x//i)
    yield (1, x)

ans = 0
for a in A:
    gen = primes(a)
    for g in gen:
        v1, v2 = g
        if v1 == v2:
            ans += dd[v1] * dd[v2]
        else:
            ans += dd[v1] * dd[v2]
            ans += dd[v2] * dd[v1]
print(ans)

"""
MAX = 100001 
is_prime = [True] * MAX
prime = []
def primes(n):
    sqn = int(n ** 0.5)
    for i in range(2, n):
        if is_prime[i] == True:
            p.append(i)
            for j in range(i, MAX, i):
                is_prime[j] = False
primes(MAX)
"""
