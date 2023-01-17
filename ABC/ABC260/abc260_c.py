N, X, Y = map(int, input().split())

def dfs(level, color, num):
    if level < 2:
        if color == "RED":
            return 0
        return num
    cnt = 0 
    if color == "RED":
        cnt += dfs(level-1, color="RED", num=num)
        cnt += dfs(level, color="BLUE", num=X*num)
    elif color == "BLUE":
        cnt += dfs(level-1, color="RED", num=num)
        cnt += dfs(level-1, color="BLUE", num=num*Y)
    return cnt

ans = dfs(N, color="RED", num=1)
print(ans)
