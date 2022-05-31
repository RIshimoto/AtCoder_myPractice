from collections import defaultdict
from scipy.special import comb
N = int(input())
xy = [list(map(int, input().split())) for _ in range(N)]
xy = sorted(xy)

dd = defaultdict(int)
for i in range(N):
    dd[xy[i][0]] += 1

n = len(dd)
lst = [[] for _ in range(n)]
j = 0
for i in range(N):
    x, y = xy[i][0], xy[i][1]
    dd[x] -= 1
    lst[j].append(y)
    if dd[x] == 0:
        j+=1
ans = 0
for i in range(n):
    for j in range(i+1, n):
        ans += comb(sum([lst[i].count(x) for x in lst[j]]), 2, exact=True)
print(ans)
