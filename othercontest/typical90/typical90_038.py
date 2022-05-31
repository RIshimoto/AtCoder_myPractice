A, B = map(int, input().split())

from math import gcd
lcm = A * B // gcd(A, B)
if lcm <= 10 ** 18:
    print(lcm)
else:
    print("Large")
