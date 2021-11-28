import itertools

N = int(input())
l = [list(map(int, input().split())) for l in range(N)]
s = list(itertools.combinations(l, 3))
ans = 0
for x, y, z in s:
    if (y[0] - x[0]) * (z[1] - x[1]) - (z[0] - x[0]) * (y[1] - x[1]) != 0:
        ans+=1
print(ans)
