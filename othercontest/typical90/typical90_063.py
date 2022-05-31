from collections import defaultdict
H, W = map(int, input().split())
P = [list(map(int, input().split())) for _ in range(H)]

ans = 0
for i in range(1, 2 ** H):
    select = []
    for j in range(H):
        if (i >> j) & 1:
            select.append(j)

    R = []
    for k in range(W):
        flag = True
        n = P[select[0]][k]
        for j in select:
            if n != P[j][k]:
                flag = False
        if flag:
            R.append(n)
    dd = defaultdict(int)
    ret = 0
    for i in range(len(R)):
        dd[R[i]] += 1
        ret = max(ret, dd[R[i]] * len(select))
    ans = max(ret, ans)
print(ans)
