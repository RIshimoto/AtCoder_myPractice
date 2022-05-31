import itertools

def f(p, q):
    return (p[1] - q[1]) / (p[0] - q[0])

N = int(input())
l = [list(map(int, input().split())) for _ in range(N)]
s = list(itertools.combinations(l, 2))
ans = 0
for p, q in s: 
    k = f(p, q)
    if -1 <= k and k <= 1: 
        ans+=1
print(ans)
