def solve(N, M, AB):
    import heapq
    indeg = [0] * N
    out = [[] for _ in range(N)]
    for ab in AB:
        a, b = ab[0], ab[1]
        a, b = a-1, b-1
        indeg[b] += 1
        out[a].append(b)

    hq = []
    for i in range(N):
        if indeg[i] == 0:
            heapq.heappush(hq, i)
    S = []
    while len(hq) != 0:
        i = heapq.heappop(hq)
        S.append(i+1)
        for j in out[i]:
            indeg[j] -= 1
            if indeg[j] == 0:
                heapq.heappush(hq, j)
    if len(S) == N:
        return S
    else:
        return [-1]


if __name__ == '__main__':
    N, M = map(int, input().split())
    AB = []
    for _ in range(M):
        A, B = map(int, input().split())
        AB.append([A, B])
    ans = solve(N, M, AB)
    print(*ans)
