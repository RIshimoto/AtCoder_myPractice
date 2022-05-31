from collections import defaultdict
N, K = map(int, input().split())
A = list(map(int, input().split()))

sums = [0] * (N + 1)
for i in range(N):
    sums[i+1] = sums[i] + A[i]

ans = 0
dd = defaultdict(int)
for r in range(1, N+1):
    dd[sums[r - 1]] += 1
    ans += dd[sums[r] - K]
print(ans)
