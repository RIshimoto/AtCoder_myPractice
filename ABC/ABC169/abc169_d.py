from math import sqrt
N = int(input())

a = [0] * 50
for n in range(1, 10):
    a[n*(n+1)//2] += 1
for i in range(1, len(a)):
    a[i] += a[i-1]

ans = 0
cnt = 0 
x = N
sqn = int(sqrt(N))
for i in range(2, sqn+1):
    cnt = 0
    while x % i == 0:
        cnt+=1
        x /= i
    ans += a[cnt]
if x != 1:
    ans += 1
print(ans)

