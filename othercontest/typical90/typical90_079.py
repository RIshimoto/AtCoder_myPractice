H, W = map(int, input().split())
A = [list(map(int, input().split())) for _ in range(H)]
B = [list(map(int, input().split())) for _ in range(H)]

ans = 0
tmp = [[0 for _ in range(W)] for _ in range(H)]
for i in range(H-1):
    for j in range(W-1):
        diff = B[i][j] - A[i][j] - tmp[i][j]
        tmp[i][j] += diff
        tmp[i+1][j] += diff
        tmp[i][j+1] += diff
        tmp[i+1][j+1] += diff
        ans += abs(diff)
    if A[i][W-1] + tmp[i][W-1] != B[i][W-1]:
        print("No")
        exit()
print("Yes")
print(ans)
