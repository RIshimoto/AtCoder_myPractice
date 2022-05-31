import math 
N = int(input())

def lcm(a, b):
    return a * b // math.gcd(a, b)

ans = 1
for _ in range(N):
    T = int(input())
    ans = lcm(ans, T)
print(ans)
