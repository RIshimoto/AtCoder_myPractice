def solve(N):
    MOD = 998244353
    N2 = N**2
    sqn = int(N ** 0.5)
    ans = 0
    for X in range(1, sqn+1):
        ans += (N - X**2) // (2*X) + 1
        ans %= MOD
    return ans % MOD

if __name__ == '__main__':
    N = int(input())
    ans = solve(N)
    print(ans)
