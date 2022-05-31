S = input()
MOD = 10**9+7

index = {'c':1, 'h':2, 'o':3, 'k':4, 'u':5, 'd':6, 'a':7, 'i':8}

dp = [0] * 9
dp[0] = 1
for s in S:
    if not s in 'chokudai':
        continue
    dp[index[s]] += dp[index[s]-1] % MOD
print(dp[8] % MOD)
