from collections import defaultdict

def solve(N, M, S, X):
    dd = defaultdict(lambda : 0)
    for x in X:
        a = 0
        dd[x - a] += 1
        for i, s in enumerate(S):
            a = s - a
            if i % 2 == 0:
                dd[a - x] += 1
            else:
                dd[x - a] += 1
    k = max(dd, key=dd.get)
    ans = X.count(k)
    for s in S:
        k = s - k 
        ans += X.count(k)
    return ans

if __name__ == '__main__':
    N, M = map(int, input().split())
    S = list(map(int, input().split()))
    X = list(map(int, input().split()))
    ans = solve(N, M, S, X)
    print(ans)
