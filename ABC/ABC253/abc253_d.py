N, A, B = map(int, input().split())

def gcd(x, y):
    if y == 0:
        return x
    return gcd(y, x%y)

def f(a, b, m):
    return (a + b) * m // 2

C = A*B//gcd(A, B)
ans = f(1, N, N) - f(A, N//A*A, N//A) - f(B, N//B*B, N//B) + f(C, N//C*C, N//C)
print(ans)
