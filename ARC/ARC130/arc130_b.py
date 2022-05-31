H, W, C, Q = map(int, input().split())
tnc = [list(map(int, input().split())) for _ in range(Q)]

selected_row = set()
selected_col = set()
ans = [0] * C
for t, n, c in reversed(tnc):
    if t == 1:
        if n in selected_row:
            continue
        ans[c-1] += W
        H -= 1
        selected_row.add(n)
    elif t == 2:
        if n in selected_col:
            continue
        ans[c-1] += H
        W -= 1
        selected_col.add(n)
print(*ans)
