def solve(N):
    dd = [[] for _ in range(N+1)]
    for n in range(2, N+1):
        sqn = int(n**0.5)
        x = n
        for p in range(2, sqn+1):
            if x % p == 0:
                q = 0
                while x % p == 0:
                    x //= p
                    q += 1
                dd[n].append((p, q))
        if x != 1:
            dd[n].append((x, 1))

    def dfs(n, th, lst, depth=0):
        if depth >= len(lst):
            if n > N or th // n > N:
                return 0 
            return 1
        cnt = 0
        p, max_q  = lst[depth]
        for q in range(max_q*2+1):
            cnt += dfs(n*p**q, th, lst, depth+1)
        return cnt

    ans = 0
    for i in range(1, N+1):
        ans += dfs(1, i**2, dd[i])
    return ans

if __name__ == '__main__':
    N = int(input())
    ans = solve(N)
    print(ans)
