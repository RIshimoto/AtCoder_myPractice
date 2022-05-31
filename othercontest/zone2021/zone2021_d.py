from collections import deque
S = input()

rev = False
deq = deque()
for s in S:
    if s == 'R':
        rev = not rev
        continue
    if rev:
        deq.appendleft(s)
    else:
        deq.append(s)

if rev:
    deq2 = deque()
    while len(deq) != 0:
        deq2.append(deq.pop())
    deq = deq2

ans = deque()
for t in deq:
    if len(ans) > 0 and ans[-1] == t:
        ans.pop()
    else:
        ans.append(t)
print(''.join(ans))
