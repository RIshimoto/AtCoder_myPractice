import itertools
N = int(input())
A = [list(map(int, input().split())) for _ in range(N)]
M = int(input())

kenaku = [[False for _ in range(N)] for _ in range(N)]
for _ in range(M):
    x, y = map(int, input().split())
    x, y = x-1, y-1
    kenaku[x][y] = True
    kenaku[y][x] = True

ans = float('inf')
for v in itertools.permutations(range(N), N):
    ok = True
    for i in range(N-1):
        if kenaku[v[i]][v[i+1]] == True:
            ok = False;
    if ok:
        sum = 0
        for i in range(N):
            sum += A[v[i]][i]
        ans = min(sum, ans)
print(ans if ans != float('inf') else -1)

