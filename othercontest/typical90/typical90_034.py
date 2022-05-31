from collections import defaultdict
N, K = map(int, input().split())
A = list(map(int, input().split()))

syurui = defaultdict(int)
cnt = 0
ans = 0
r = 0
for l in range(N):
    while r < N:
        if syurui[A[r]] == 0 and len(syurui) > K:
            break
        syurui[A[r]] += 1
        r += 1
    ans = max(ans, r - l)
    if l == r:
        r += 1
    else:
        syurui[A[l]] -= 1
        if syurui[A[l]] == 0:
            syurui.pop(A[l])
print(ans)
