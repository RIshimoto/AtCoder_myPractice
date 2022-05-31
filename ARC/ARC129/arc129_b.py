N = int(input())
LR = [map(int, input().split()) for _ in range(N)]
L, R = [list(i) for i in zip(*LR)]

A = L[0]
B = R[0]
for k in range(N):
    A = max(A, L[k])
    B = min(B, R[k])
    # 範囲が重なっているとき
    if A <= B:
        x = A
    # そうじゃないとき
    elif B < A:
        x = (A + B) // 2
    print(max(0, A - x, x - B))
