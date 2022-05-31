N = int(input())
MOD = 998244353

dp = [[0 for _ in range(9)] for _ in range(N)]
for i in range(9):
    dp[0][i] = 1
for i in range(1, N):
    for j in range(9):
        if j - 1 >= 0:
            dp[i][j-1] += dp[i-1][j]
        if j + 1 < 9:
            dp[i][j+1] += dp[i-1][j]
        dp[i][j] += dp[i-1][j]
        dp[i][j] %= MOD
ans = sum(dp[N-1])
print(ans%MOD)
