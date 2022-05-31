n, m = map(int, input().split())
d = (n * 30 + 0.5 * m) - 6 * m
if d > 360:
    d -= 360
if d < 0:
    d += 360
print(min(d, 360 - d))
