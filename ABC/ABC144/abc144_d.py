import math
a, b, x = map(int, input().split())

if a * a * b > 2 * x: 
    theta = b / (2 * x / a / b)
else:
    theta = 2 * (a * a * b - x) / a / a / a
print(math.degrees(math.atan(theta)))
