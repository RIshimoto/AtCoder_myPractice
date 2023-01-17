def solve(N, a, b):
    X = []
    for i in range(N):
        X.append(a[0] ^ b[i])
    X.sort()
    b.sort()
    ans = set()
    for x in X:
        c = []
        for i in range(N):
            c.append(a[i] ^ x)
        c.sort()
        if b == c:
            ans.add(x)
    print(len(ans))
    for a in sorted(ans):
        print(a)

if __name__ == '__main__':
    N = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    solve(N, a, b)
