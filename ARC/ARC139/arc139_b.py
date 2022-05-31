T = int(input())

for _ in range(T):
    N, A, B, X, Y, Z = map(int, input().split())
    Y = min(Y, A*X)
    Z = min(Z, B*X)
    if Y / A > Z / B:
        Y, Z = Z, Y
        A, B = B, A
    
    ans = N * X
    for i in range(N//A + 1): 
        for j in range(A):
            if N - A * i - B * j < 0:
                break
            ans = min(ans, X * (N - A * i - B * j) + Y * i + Z * j)
    print(ans)
