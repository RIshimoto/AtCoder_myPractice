def solve1(X, A, D, N):
    if D < 0:
        A = A + D * (N - 1)
        D = -D
    left = 0
    right = N-1
    while right - left > 1:
        mid = (left + right) // 2 
        if X < A + mid * D:
            right = mid
        else:
            left = mid
    ans = min(abs(X - (A + left * D)), abs(X - (A + right * D)))
    return ans

def solve2(X, A, D, N):
    if D < 0:
        A = A + D * (N - 1)
        D = -D
    if D == 0 or X <= A:
        return abs(X - A)

    n = min(N-1, abs((X - A) // D))
    m = min(N-1, n+1)
    return min(abs(X - (A + n * D)), abs(X - (A + m * D)))

if __name__ == '__main__':
    X, A, D, N = map(int, input().split())
    solve = solve2
    ans = solve(X, A, D, N)
    print(ans)
