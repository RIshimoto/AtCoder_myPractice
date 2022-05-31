from collections import deque
N = int(input())
S = input()

ans = deque()
ans.append(N)
for i in range(N-1, -1, -1):
    if S[i] == 'R':
        ans.appendleft(i)
    else: 
        ans.append(i)
print(*ans)
