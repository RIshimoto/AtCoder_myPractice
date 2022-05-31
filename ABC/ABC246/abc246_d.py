N = int(input())

def X(a, b):
    return a ** 3 + a ** 2 * b + a * b ** 2 + b ** 3

MAX = 1000001
ans = float('inf')
for a in range(MAX):
    l = -1
    r = MAX
    while r - l > 1:
        m = (l + r) // 2 
        if X(a, m) < N:
            l = m 
        else:
            r = m
    ans = min(ans, X(a, r))
print(ans)
