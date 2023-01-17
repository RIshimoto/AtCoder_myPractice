N = int(input())
a = list(map(int, input().split()))

sums = [0] * (N + 1)
for i in range(N):
    sums[i+1] = sums[i] + a[i]

dp = [[float('inf')] * (N+2) for _ in range(N+2)]
# [l, r]
def f(l, r):
    if dp[l][r] != float('inf'):
        return dp[l][r]

    if r == l:
        return 0

    fans = float('inf')
    for m in range(l, r):
        fans = min(fans, f(l, m) + f(m+1, r))
    dp[l][r] = fans + (sums[r]-sums[l-1])
    return dp[l][r]

ans = f(1, N)
print(ans)
