Q = int(input())

class BIT:
    def __init__(self, n):
        self.n = n
        self.a = [0] * (n + 1)

    # a[i] に xを加算する
    def add(self, i, x):
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

def solve():
    query = [list(map(int, input().split())) for _ in range(Q)]

    compression = lambda x: {v:i for i,v in enumerate(x, 1) }
    xs = sorted(set([q[1] for q in query]))
    compressed_x = compression(xs)
    MAX=max(compressed_x.values())
    bit = BIT(MAX)
    for q in query:
        if q[0] == 1:
            x = compressed_x[q[1]]
            bit.add(x, 1)
        elif q[0] == 2:
            x, k = compressed_x[q[1]], q[2]
            if bit.sum(1, x) < k:
                print("-1")
                continue
            lo = 1
            hi = x+1
            while hi - lo > 1:
                mid = (hi + lo) // 2
                if k <= bit.sum(mid, x):
                    lo = mid
                else:
                    hi = mid
            if lo > 0:
                print(xs[lo-1])
            else:
                print(-1)
        elif q[0] == 3:
            x, k = compressed_x[q[1]], q[2]
            if bit.sum(x, MAX) < k:
                print("-1")
                continue
            lo = x-1
            hi = MAX
            while hi - lo > 1:
                mid = (hi + lo) // 2
                if k <= bit.sum(x, mid):
                    hi = mid
                else:
                    lo = mid
            if hi > 0:
                print(xs[hi-1])
            else:
                print(-1)

if __name__ == '__main__':
    solve()
