N = int(input())

cnt = 0
m = int(N**0.5)
for i in range(1, m+1):
    cnt += N // i
ans = 2 * cnt - m ** 2 
print(ans)
