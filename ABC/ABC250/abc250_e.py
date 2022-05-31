from collections import defaultdict
N = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

ca = [-1] * N
cb = [-1] * N
mx = [-1] * N
mp =  defaultdict(lambda: 0)
for i in range(N):
    if a[i] not in mp:
        mp[a[i]] = len(mp) + 1
    ca[i] = len(mp)

m = 0
st = set()
for i in range(N):
    st.add(b[i])
    x = mp[b[i]]
    if x == 0:
        x = float('inf')
    m = max(m, x)
    mx[i] = m
    cb[i] = len(st)

Q = int(input())
for _ in range(Q):
    x, y = map(int, input().split())
    x -= 1
    y -= 1
    if ca[x] == cb[y] and mx[y] == cb[y]:
        print("Yes")
    else:
        print("No")
