class BIT:
    def __init__(self, n):
        self.n = n
        self.a = [0] * (n + 1)

    # a[i] に xを加算する
    def add(self, i, x):
        if i == 0:
            return
        k = i
        while k <= self.n:
            self.a[k] += x
            k += (k & -k)

    # b[i] + b[i+1] + ... + b[j]
    def sum(self, i, j):
        return self.sum_sub(j) - self.sum_sub(i - 1)

    def sum_sub(self, i):
        if i == 0:
            return 0
        s = 0
        k = i
        while k > 0:
            s += self.a[k]
            k -= (k & -k)
        return s

N = int(input())
C = list(map(int, input().split()))
X = list(map(int, input().split()))

a = [[] for _ in range(N+1)]
for c, x in zip(C, X):
    a[0].append(x)
    a[c].append(x)

bits = BIT(N)
ans = 0
for c in range(N+1):
    for j, x in enumerate(a[c]):
        k = j - bits.sum(i=1, j=x)
        bits.add(x, 1)
        if c == 0:
            ans += k
        else:
            ans -= k
    print(a[c])
    print(bits.a)
    for x in a[c]:
        bits.add(x, -1)
        print(bits.a)
print(ans)
