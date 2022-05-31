def solve(N, M, xy):
    import bisect
    def LIS(A):
        ans = 0
        B = [float('inf')]
        for i, a in enumerate(A):
            if a > B[-1]:
                pos = len(B)
                B.append(a)
            else:
                pos = bisect.bisect_left(B, a)
                B[pos] = a
            ans = max(ans, pos+1)
        return ans

    xy.sort(key=lambda x: (x[0], -x[1]))
    ys = [y for x, y in xy]
    return LIS(ys)

if __name__ == '__main__':
    N, M = map(int, input().split())
    xy = [tuple(map(int, input().split())) for _ in range(M)]
    ans = solve(N, M, xy)
    print(ans)
