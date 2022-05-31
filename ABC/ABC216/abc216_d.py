from collections import deque
N, M = map(int, input().split())

cylinder = []
for _ in range(M):
    k = int(input())
    c = deque(list(map(int, input().split())))
    cylinder.append(c)

memo = [[] for _ in range(N)]
for i in range(M):
    memo[cylinder[i].popleft()-1].append(i)

que = deque()
for i in range(N):
    if len(memo[i]) == 2:
        que.append(i)

while len(que) != 0:
    q = que.popleft()
    for p in memo[q]:
        if len(cylinder[p]) != 0:
            a = cylinder[p].popleft()-1
            memo[a].append(p)
            if len(memo[a]) == 2:
                que.append(a)
            
ok = True
for c in cylinder:
    if len(c) != 0:
        ok = False

if ok:
    print("Yes")
else:
    print("No")

