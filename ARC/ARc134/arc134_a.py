L, R = map(int, input().split())

def gcd(x, y):
    if y == 0:
        return x
    return gcd(y, x % y)

diff = R - L
for d in range(R-L, 0, -1):
    l = L
    while l + d <= R:
        if gcd(l, l + d) == 1:
            print(d)
            exit()
        l += 1
