N, K = map(int, input().split())
p = list(map(int, input().split()))

ps = [(1 + p[i]) / 2 for i in range(N)]
sums = [0] * (N + 1)
for i in range(N):
    sums[i+1] = sums[i] + ps[i]
ans = 0
for i in range(N-K+1): 
    ans = max(ans, sums[i+K] - sums[i])
print(ans)
