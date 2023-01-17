N, M = map(int, input().split())

def dfs(output, n=1):
    if n >= N:
        print(*output)
        return

    for m in range(output[n-1]+1, M+1):
        output[n] = m
        dfs(output, n+1)
    return

output = [None] * N
for m in range(1, M+1):
    output[0] = m
    dfs(output)
