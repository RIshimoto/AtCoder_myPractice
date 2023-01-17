from collections import defaultdict
N, C = map(int, input().split())
d = defaultdict(lambda: 0)
st = set()
for _ in range(N):
    a, b, c = map(int, input().split())
    st.add(a)
    st.add(b+1)
    d[a] += c
    d[b+1] -= c

prev_k = -1
value = 0
ans = 0
for k in sorted(st):
    ans += min(C, value) * (k - prev_k)
    value += d[k]
    prev_k = k
print(ans) 
