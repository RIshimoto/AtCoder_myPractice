import math

N = int(input())
xy = [list(map(int, input().split())) for _ in range(N)]

s = set()
for i in range(N):
    for j in range(N):
        if i == j:
            continue
        v = xy[i][0] - xy[j][0]
        u = xy[i][1] - xy[j][1]
        d = math.gcd(v, u)
        s.add((v // d, u // d))
print(len(s))
