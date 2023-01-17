def solve(N, L, A):
    import heapq
    ans = 0
    heapq.heapify(A)
    if L - sum(A) > 0:
        heapq.heappush(A, L-sum(A))
    while len(A) > 1:
        x = heapq.heappop(A)
        y = heapq.heappop(A)
        heapq.heappush(A, x+y)
        ans += x + y
    return ans

if __name__ == '__main__':
    N, L = map(int, input().split())
    A = list(map(int, input().split()))
    ans = solve(N, L, A)
    print(ans)
