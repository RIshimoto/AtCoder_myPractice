N = int(input())
A = list(map(int, input().split()))

ans = 0
for l in range(N):
    mn = A[l]
    for r in range(l, N):
        mn = min(mn, A[r])
        ans = max(ans, (r - l + 1) * mn)
print(ans)
