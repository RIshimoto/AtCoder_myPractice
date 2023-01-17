N = int(input())
a = list(map(int, input().split()))

dp = [[0] * N for _ in range(N)]
for i in range(N):
    if N % 2 == 0:
        dp[i][i] = -a[i]
    elif N % 2 != 0:
        dp[i][i] = a[i]

# [i, j]
for s in range(1, N):
    for j in range(s, N):
        i = j - s
        if (N - s) % 2 != 0: # 先手
            dp[i][j] = max(dp[i][j-1] + a[j], dp[i+1][j] + a[i])
        else: # 後手
            dp[i][j] = min(dp[i][j-1] - a[j], dp[i+1][j] - a[i])
ans = dp[0][N-1]
print(ans)
