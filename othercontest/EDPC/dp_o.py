N = int(input())
a = [list(map(int, input().split())) for _ in range(N)]
MOD = 10**9+7

def bit_count(s):
    return bin(s)[2:].count('1')

dp = [0] * (1<<N)
dp[0] = 1
for S in range(1<<N):
    i = bit_count(S)
    for j in range(N):
        if (S & (1 << j)) == 0 and a[i-1][j] == 1:
            T = S | (1 << j)
            dp[T] = (dp[T] + dp[S]) % MOD
ans = dp[(1<<N)-1]
print(ans)
