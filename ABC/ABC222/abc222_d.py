MOD = 998244353
N = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

W = 3001
dp = [0] * W
dp[0] = 1
for i in range(N):
    cnt = dp
    for j in range(1, W):
        cnt[j] += cnt[j-1]
    dp = [0] * W
    for j in range(a[i], b[i]+1):
        dp[j] = cnt[j]
ans = sum(dp) % MOD
print(ans)
