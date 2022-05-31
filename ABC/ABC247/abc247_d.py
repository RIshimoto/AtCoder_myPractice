from collections import deque
que = deque()
Q = int(input())
for _ in range(Q):
    l = list(map(int, input().split()))
    if l[0] == 1:
        x, c = l[1], l[2]
        que.append((x, c))
    elif l[0] == 2:
        c = l[1]
        ans = 0
        while c > 0:
            x, cnt = que.popleft()
            if cnt <= c:
                ans += x * cnt
            elif cnt > c:
                ans += x * c
                que.appendleft((x, cnt-c))
            c -= cnt
        print(ans)

