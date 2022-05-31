N = int(input())
A = list(map(int, input().split()))

dp = [[float('inf') for _ in range(2)] for _ in range(N)]
ans = float('inf')
for t in range(2):
    dp[0][1-t] = float('inf')
    dp[0][t] = A[0] * t
    for i in range(1, N):
        dp[i][0] = dp[i-1][1]
        dp[i][1] = min(dp[i-1][0], dp[i-1][1]) + A[i]
    if t == 0: ans = min(ans, dp[N-1][1])
    if t == 1: ans = min(ans, min(dp[N-1]))
print(ans)
