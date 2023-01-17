T = int(input())

def f(B, x, y):
    return y * B + x * (1 + y) * y // 2

for _ in range(T):
    N, M = map(int, input().split())
    xy = [tuple(map(int, input().split())) for _ in range(N)]
    ans = -float('inf')
    B = 0
    A = 0
    for i, (x, y) in enumerate(xy):
        ans = max(ans, A + B + x)
        if x < 0 and B > 0:
            ans = max(ans, A+f(B, x, min(y, B // -x)))
        A += f(B, x, y)
        B += x * y 
        ans = max(ans, A)
    print(ans)
