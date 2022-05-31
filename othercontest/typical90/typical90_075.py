import math
N = int(input())

cnt = 0
sqn = int(math.sqrt(N))
x = N
for i in range(2, sqn+1):
    while x % i == 0: 
        x //= i
        cnt += 1
if x != 1:
    cnt += 1

print(math.ceil(math.log2(cnt)))
