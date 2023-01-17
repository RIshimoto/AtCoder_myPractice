N = int(input())
sekinin = 'J' + input()
MOD = 10007
schedule = {"J":0, "O":1, "I":2}

def bit(S, i):
    if (S & (1 << i)) == 0:
        return False
    return True

dp = [[0] * (1<<3) for _ in range(N+1)]
dp[0][1] = 1
for i in range(1, N+1):
    p = schedule[sekinin[i-1]]
    q = schedule[sekinin[i]]
    for S in range(1, 1<<3):
        for T in range(1, 1<<3):
            if bit(S, p) == False:
                continue
            if bit(T, q) == False:
                continue
            if (S & T) == 0:
                continue
            dp[i][T] += dp[i-1][S] 
            dp[i][T] %= MOD
ans = sum(dp[N]) % MOD
print(ans)
