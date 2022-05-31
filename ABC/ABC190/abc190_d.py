import math
N = int(input())

N2 = N * 2
ans = 0
sqn = int(N2 ** 0.5)
for a in range(1, sqn+1):
    if N2 % a == 0:
        b = N2 // a
        if (a - b + 1) % 2 == 0 and (a + b - 1) % 2 == 0:
            ans += 2
print(ans)

