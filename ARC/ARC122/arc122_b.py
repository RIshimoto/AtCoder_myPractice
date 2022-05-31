N = int(input())
A = list(map(int, input().split()))

def f(x):
    y = 0
    for a in A:
        y += x + a - min(a, 2 * x)
    y /= N
    return y

low = 0
high = max(A) / 2
while high - low > pow(10, -6):
    c1 = (low * 2 + high) / 3
    c2 = (low + high * 2) / 3
    if f(c1) > f(c2):
        low = c1
    else:
        high = c2
print(f(low))
