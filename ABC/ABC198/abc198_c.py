import math
R, X, Y = map(int, input().split())

d = math.sqrt(X ** 2 + Y ** 2)
if d == R:
    ans = 1
elif d <= 2 * R:
    ans = 2
else:
    ans = d // R
print(ans)
