from collections import defaultdict, deque

def solve(M, uv, p):
    graph = [[] for _ in range(10)]
    for u, v in uv:
        graph[u].append(v)
        graph[v].append(u)

    vertex2koma = [0] * 10
    vertex2koma[0] = -1
    for i in range(8):
        vertex2koma[p[i]] = i+1

    start_v = -1
    for i in range(1, 10):
        if vertex2koma[i] == 0:
            start_v = i

    visited ={tuple(vertex2koma)}
    que = [(vertex2koma, start_v, 0)]
    for (vertex2koma, v, cnt) in que:
        if vertex2koma[1:9] == [1, 2, 3, 4, 5, 6, 7, 8]:
            return cnt

        for u in graph[v]:
            vertex2koma_ = vertex2koma.copy()
            vertex2koma_[u] = 0
            vertex2koma_[v] = vertex2koma[u]
            if tuple(vertex2koma_) in visited:
                continue
            visited.add(tuple(vertex2koma_))
            que.append((vertex2koma_, u, cnt+1))
    return -1

if __name__ == '__main__':
    M = int(input())
    uv = [tuple(map(int, input().split())) for _ in range(M)]
    p = list(map(int, input().split()))
    ans = solve(M, uv, p)
    print(ans)
