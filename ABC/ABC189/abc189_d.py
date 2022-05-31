N = int(input())
S = []
for _ in range(N):
    S.append(input())

memo = [[-1, -1] for _ in range(N)]
def dfs(i, bool):
    if i < 0:
        return 1
    if memo[i][bool] != -1:
        return memo[i][bool]
    t = dfs(i - 1, True)
    f = dfs(i - 1, False)
    cnt = 0
    if bool == True:
        if S[i] == "OR":
            cnt = 2 * t + f
        if S[i] == "AND":
            cnt = t
        memo[i][1] = cnt
    elif bool == False:
        if S[i] == "OR":
            cnt = f
        if S[i] == "AND":
            cnt = t + 2 * f
        memo[i][0] = cnt
    return cnt

ans = dfs(N - 1, True)
print(ans)
