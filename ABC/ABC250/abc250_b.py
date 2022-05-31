N, A, B = map(int, input().split())

ans = [["." for _ in range(B*N)] for _ in range(A*N)]
white = True
for i in range(0, A*N, A):
    if white:
        c = "."
    else:
        c = "#"
    for j in range(0, B*N, B):
        for a in range(A):
            for b in range(B):
                ans[i+a][j+b] = c
        if c == ".":
            c = "#"
        else:
            c = "."
    white ^= True

for i in range(A*N):
    for j in range(B*N):
        print(ans[i][j], end="")
    print()

