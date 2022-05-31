def solve(N, X):
    LR = [n for n in range(1, N+1) if n != X]
    LR.sort()
    m = N // 2
    ans = [X]
    if N % 2 == 0:
        if N // 2 >= X:  
            for i in range(m):
                if m + i - 1 < len(LR):
                    ans.append(LR[m+i-1])
                if m - i - 2 >= 0:
                    ans.append(LR[m-i-2])
        else:
            for i in range(m):
                if m - i - 1 >= 0:
                    ans.append(LR[m-i-1])
                if m + i < len(LR):
                    ans.append(LR[m+i])
    else:
        for i in range(m):
            if m - i - 1 >= 0:
                ans.append(LR[m-i-1])
            if m + i < len(LR):
                ans.append(LR[m+i])
    return ans

if __name__ == '__main__':
    N, X = map(int, input().split())
    ans = solve(N, X)
    print(*ans)
