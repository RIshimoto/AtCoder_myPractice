from collections import defaultdict
N, K = map(int, input().split())
xy = [map(int, input().split()) for _ in range(N)]
x, y = [list(i) for i in zip(*xy)]

def gcd(x, y):
    if y == 0:
        return x
    return gcd(y, x % y)

if K == 1:
    print("Infinity")
else:
    cnt = defaultdict(int)
    for i in range(N):  
        for j in range(i):
            a = x[i] - x[j]
            b = y[i] - y[j]
            if a < 0:
                a, b = -a, -b
            if a == 0:
                b = 1
            else:
                g = gcd(a, b)
                a /= g
                b /= g
            c = a * y[i] - b * x[i]
            cnt[(a, b, c)] += 1
    ans = 0
    for second in cnt.values():
        if second >= K * (K - 1) // 2:
            ans += 1
    print(ans)
