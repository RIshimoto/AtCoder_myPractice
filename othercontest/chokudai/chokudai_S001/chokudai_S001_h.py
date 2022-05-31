import bisect
N = int(input())
a = list(map(int, input().split()))

dp = [float('inf') for _ in range(N+1)]
for i in range(N):
    j = bisect.bisect(dp, a[i])
    dp[j] = a[i]

ans = N
for i in range(N):
    if dp[i] == float('inf'):
        ans = i
        break
print(ans)
