N = int(input())
s = input()
MOD = 10**9+7

dp = [[0] * N for _ in range(N)]
for j in range(N):
    dp[0][j] = 1

cum = [0] * (N+1)
for i in range(N-1):
    cum[0] = 0
    for j in range(N-i):
        cum[j+1] = (cum[j]+dp[i][j]) % MOD

    if s[i] == '<':
        for j in range(N-i):
            dp[i+1][j] = (cum[N-i] - cum[j+1] + MOD) % MOD
    else:
        for j in range(N-i):
            dp[i+1][j] = cum[j+1]
ans = dp[N-1][0]
print(ans)
