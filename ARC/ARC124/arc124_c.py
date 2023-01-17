N = int(input())
ab = [tuple(map(int, input().split())) for _ in range(N)]

def lcm(x, y):
    return x * y // gcd(x, y)

def gcd(x, y):
    if y == 0:
        return x
    return gcd(y, x%y)

def divisor(n):
    sqn = int(n**0.5)
    for i in range(1, sqn+1):
        if n % i == 0:
            yield i
            yield n//i

ans = 0
for x in divisor(ab[0][0]):
    for y in divisor(ab[0][1]):
        ok = True
        for a, b in ab:
            if not((a % x == 0 and b % y == 0) or (a % y == 0 and b % x == 0)):
                ok = False
        if ok:
            ans = max(ans, lcm(x, y))
print(ans)
