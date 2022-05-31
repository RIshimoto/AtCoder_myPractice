def solve(N):
    ans = 0
    left = 1
    right = 2
    for i in range(16):
        l = left
        r = right
        for j in range(16-i):
            diff = min(r-1, N) - min(l-1, N)
            ans += diff
            l *= 10
            r *= 10
        left = left * 10 + 1
        right = left + 1
    return ans

if __name__ == '__main__':
    N = int(input())
    ans = solve(N)
    print(ans)

