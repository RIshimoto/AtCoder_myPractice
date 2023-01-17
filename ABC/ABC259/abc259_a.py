N, M, X, T, D = map(int, input().split())

if X <= M:
    print(T)
else:
    for _ in range(X-M):
        T -= D
    print(T)
