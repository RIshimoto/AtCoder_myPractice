def solve(N, K, S):
    from collections import defaultdict
    ans = N
    for k in range(1, N//2+1): 
        if N % k == 0:
            l = 0
            r = k
            while r < N: 
                l = r
                r += k
            cnt = 0
            for i in range(k):
                mp = defaultdict(lambda: 0)
                j = 0
                while i + j * k < N:
                    mp[S[i+j*k]] += 1
                    j += 1
                cnt += j - max(mp.values())
            if cnt <= K:
                ans = min(k, ans)
    return ans

if __name__ == '__main__':
    N, K = map(int, input().split())
    S = input()
    ans = solve(N, K, S)
    print(ans)
