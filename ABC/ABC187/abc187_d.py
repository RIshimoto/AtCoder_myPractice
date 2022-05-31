N = int(input())
x = []
Aoki = 0
for _ in range(N):
    a, b = map(int, input().split())
    x.append(2 * a + b)
    Aoki += b
x.sort(reverse=True)
cnt = 0
while Aoki > 0:
    Aoki -= x[cnt]
    cnt += 1
print(cnt)

