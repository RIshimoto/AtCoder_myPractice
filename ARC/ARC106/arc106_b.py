""""
import sys
sys.setrecursionlimit(10**6)
がいるっぽい！
再帰数の上限を上げる為らしい。

sys.getrecursionlimit()
で現在の再帰数の上限デフォルトを確認する。
"""
import sys
sys.setrecursionlimit(10**6)
N, M = map(int, input().split())
A = list(map(int, input().split()))
B = list(map(int, input().split()))

graph = [[] for _ in range(N)]
visited = [False for _ in range(N)]
def dfs(v):
    if visited[v]:
        return (0, 0)

    visited[v] = True
    sum_a = A[v]
    sum_b = B[v]
    for u in graph[v]:
        result_a, result_b = dfs(u)
        sum_a += result_a
        sum_b += result_b
    return (sum_a, sum_b)
    
def solve():
    for _ in range(M):
        c, d = map(int, input().split())
        c-=1
        d-=1
        graph[c].append(d)
        graph[d].append(c)

    for i in range(N):
        total_a, total_b = dfs(i)
        if total_a != total_b:
            print("No")
            return
    print("Yes")

if __name__ == '__main__':
    solve()
