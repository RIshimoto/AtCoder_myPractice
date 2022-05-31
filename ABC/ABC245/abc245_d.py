N, M = map(int, input().split())
A = list(map(int, input().split()))
C = list(map(int, input().split()))

B = [0] * (M+1)
for k in range(M, -1, -1):
    b = C[k+N]
    for i in range(0, N):
        if k+N-i <= M:
            b -= A[i] * B[k+N-i]
    b //= A[N]
    B[k] = b
print(*B)
