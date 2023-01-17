from collections import defaultdict

class BIT:
    # 1-index
    def __init__(self, n):
        self.n = n
        self.a = [0] * (n + 1)

    # a[k] に xを加算する
    def add(self, i, x):
        k = i + 1
        while k <= self.n:
            self.a[k] += x
            k += (k & -k)

    # b[i] + b[i+1] + ... + b[j]
    # [i, j]
    def sum(self, i, j):
        return self.sum_sub(j) - self.sum_sub(i-1)

    def sum_sub(self, i):
        if i < 0:
            return 0
        s = 0
        k = i + 1
        while k > 0:
            s += self.a[k]
            k -= (k & -k)
        return s

    # a[0]+a[1]+...+a[i]>=xとなる最小のiを求める(任意のkでa[k]>=0が必要)
    def lower_bound(self, x):
        if x <= 0:
            return 0
        else:
            i = 0
            r = 1
            while r < self.n:
                r = r << 1
            len = r
            while len > 0:
                if i + len < self.n and self.a[i+len] < x:
                    x -= self.a[i+len]
                    i += len
                len = len >> 1
            return i

def comp(x):
    compress = lambda x : { v: i for i, v in enumerate(sorted(set(x))) } 
    compressed = compress(x)
    for i, n in enumerate(x):
        x[i] = compressed[n]
    return x

N = int(input())
A = list(map(int, input().split()))
B = list(map(int, input().split()))

A = comp(A)
B = comp(B)

ab = []
ab_cnt = defaultdict(lambda:0)
for a, b in zip(A, B):
    if ab_cnt[(a, b)] == 0:
        ab.append((a, b))
    ab_cnt[(a, b)] += 1
ab.sort(key=lambda x: (x[0], -x[1]))

ans = 0
bit = BIT(N+1)
for a, b in ab:
    bit.add(b, ab_cnt[(a, b)])
    k = bit.sum(b, N) 
    ans += k * ab_cnt[(a, b)]
print(ans)
