def solve(N):
    MOD = 998244353
    diff = [0] * (N + 2)
    for i in range(1, N+1):
        diff[i] = 2 * i -1 
    for i in range(N, 0, -1):
        diff[i-1] += diff[i]

    ans = 0
    for i in range(N, -1, -1):
        for j in range(N, -1, -1):
            if diff[i] - diff[j] <= N:
                ans += 1
            else:
                break
    print(diff[1:])
    return -1

if __name__ == '__main__':
    N = int(input())
    ans = solve(N)
    print(ans)
