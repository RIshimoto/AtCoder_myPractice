import sys
sys.setrecursionlimit(10**6)
N, X = map(int, input().split())
bags = []
for i in range(N):
    L = list(map(int, input().split()))
    bags.append(L[1:])

ans = 0
def dfs(i, cnt=1):
    if i >= N:
        global ans
        if cnt == X:
            ans += 1
        return 

    for ball in bags[i]:
       dfs(i + 1, cnt * ball)
    return

dfs(0)
print(ans)
