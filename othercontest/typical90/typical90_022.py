from math import gcd
A, B, C = map(int, input().split())

g = gcd(gcd(A, B), C)
print((A + B + C) // g - 3)
