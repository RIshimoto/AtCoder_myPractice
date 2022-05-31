import math

T = int(input())
L, X, Y = map(int, input().split())
Q = int(input())

r = L / 2
for _ in range(Q):
    E = int(input())
    theta = 2 * math.pi * E / T
    x = 0
    y = -r * math.sin(theta)
    z = r - r * math.cos(theta)
    ans = math.atan2(z, math.sqrt((Y - y) ** 2 + (X - x) ** 2))
    print(ans * 180 / math.pi)
