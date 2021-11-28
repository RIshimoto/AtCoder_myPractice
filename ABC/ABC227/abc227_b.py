N = int(input())
S = list(map(int, input().split()))

S.sort()
area = [ 4*a*b+3*a+3*b for a in range(1, 1001) for b in range(1, 1001)]
cnt = 0
for s in S:
    if not s in area:
        cnt += 1
print(cnt)
