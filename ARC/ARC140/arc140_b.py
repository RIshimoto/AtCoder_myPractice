def solve(N, S):
    import heapq
    cnt = 0
    pool = 0
    for i in range(1, N-1):
        if S[i-1:i+2] == 'ARC':
            cnt_a = 0
            j = i - 1
            while j >= 0 and S[j] == 'A':
                cnt_a += 1
                j -= 1
            cnt_c = 0
            j = i + 1
            while j < N and S[j] == 'C':
                cnt_c += 1
                j += 1
            cnt += 1
            pool += min(cnt_a, cnt_c)
    ans = min(cnt * 2, pool)
    return ans

if __name__ == '__main__':
    N = int(input())
    S = input()
    ans = solve(N, S)
    print(ans)
