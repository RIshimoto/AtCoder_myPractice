N = int(input())
LR = [map(int, input().split()) for _ in range(N)]
L, R = [list(i) for i in zip(*LR)]

ans = 0
for i in range(N-1):
    for j in range(i+1, N):
        n = 0
        for x in range(L[j], R[j]+1):
            n += max(R[i] - max(x + 1, L[i])+ 1, 0)
        m = (R[i] - L[i] + 1) * (R[j] - L[j] + 1)
        ans += n / m
print(ans)
