N = int(input())

def dfs(left, right, s):
    if left + right >= N: 
        if left == right:
            print(s)
        return
    elif left < right:
        return
    dfs(left + 1, right, s+'(')
    dfs(left, right + 1, s+')')
    return

dfs(1, 0, '(')
