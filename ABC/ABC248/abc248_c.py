N, M, K = map(int, input().split())
MOD = 998244353

dp = [[0 for _ in range(K+1)] for _ in range(N+1)]
dp[0][0] = 1
for i in range(N):
    for j in range(K):
        for m in range(1, M+1):
            if j + m <= K:
                dp[i+1][j + m] += dp[i][j]
ans = sum(dp[N]) % MOD
print(ans)
