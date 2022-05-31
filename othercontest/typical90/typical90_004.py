H, W = map(int, input().split())
A = [list(map(int, input().split())) for _ in range(H)]

a = [sum(A[i]) for i in range(H)]
b = [sum(A[i][j] for i in range(H)) for j in range(W)]
[print(*[a[i] + b[j] - A[i][j] for j in range(W)]) for i in range(H)]

