N, L = map(int, input().split())
K = int(input())
A = list(map(int, input().split()))

def solve(M):
    cut = 0
    prev = 0
    for i in range(N):
        if A[i] - prev >= M and L - A[i] >= M:
            prev = A[i]
            cut = cut + 1
    if cut >= K:
        return True
    return False

lo = 0
hi = L - 1
while hi - lo > 1:
    mid = (lo + hi) // 2
    if solve(mid):
        lo = mid
    else:
        hi = mid
print(lo)
