import sys
sys.setrecursionlimit(10**6)
N = int(input())
N2 = N * 2

A = [[-1 for _ in range(N2)] for _ in range(N2)]
for i in range(N2-1):
    a = list(map(int, input().split()))
    for j in range(i+1, N2):
        A[i][j] = a[j-(i+1)]
        A[j][i] = A[i][j]

ans = 0
def dfs(s, x):
    si = -1 
    for i in range(N2):
        if not s[i]:
            si = i
            break
    if si == -1:
        global ans
        ans = max(ans, x)
        return

    s[si] = True
    for i in range(N2):
        if s[i] == False and si != i:
            s[i] = True
            dfs(s, x^A[si][i])
            s[i] = False
    s[si] = False
    
if __name__ == '__main__':
    s = [False] * N2
    dfs(s, False)
    print(ans)
