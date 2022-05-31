N = int(input())
A = list(map(int, input().split()))
MOD = 998244353

dp = [[0 for _ in range(10)] for _ in range(N)]
dp[0][A[0]] = 1
for i in range(N-1):
    for j in range(10):
        if dp[i][j] >= 1:
            dp[i+1][(j + A[i+1])%10] += dp[i][j] % MOD
            dp[i+1][(j * A[i+1])%10] += dp[i][j] % MOD
[print(dp[N-1][i] % MOD) for i in range(10)]
