N, D = map(int, input().split())
LR = [map(int, input().split()) for _ in range(N)]
L, R = [list(i) for i in zip(*LR)]

a = []
for i in range(N):
    L[i] = max(1, L[i] - D // 2)
    R[i] = R[i] + D // 2 
    a.append((R[i], i))
a.sort()
cnt = 0
boarder = -1
for k, i in a:
    if L[i] <= boarder <= R[i]:
        continue
    boarder = k
    cnt += 1
print(cnt)
