N = int(input())
a = list(map(int, input().split()))

sums = [0] * N
sums[0] = a[0]
for i in range(1, N):
    sums[i] = sums[i-1] + a[i]
ans = float('inf')
for i in range(N-1):
    ans = min(ans, abs(sums[N-1] - 2 * sums[i]))
print(ans)
