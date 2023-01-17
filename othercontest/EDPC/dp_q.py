import sys
sys.setrecursionlimit(10**6)

class RMQ:
    # N: 要素数
    def __init__(self, N, init_value=float('inf'), segfunc=max):
        self.n = 2**(N-1).bit_length()
        self.INF = init_value
        self.segfunc = segfunc
        self.data = [init_value] * (2 * self.n)

    def set(self, i, x):
        self.dat[i + self.n] = x

    def build(self):
        for k in range(self.n-1, 0, -1):
            self.dat[k] = self.segfunc(self.dat[k<<1|0], self.dat[k<<1|1])

    def update(self, k, x):
        k += self.n
        self.data[k] = x
        while k > 1:
            k >>= 1
            self.data[k] = self.segfunc(self.data[k<<1|0], self.data[k<<1|1])
        
    # [l, r)
    def query(self, l, r):
        x = self.INF
        l += self.n
        r += self.n
        while l < r:
            if l & 1:
                x = self.segfunc(x, self.data[l])
                l += 1
            if r & 1:
                r -= 1
                x = self.segfunc(x, self.data[r])
            l >>= 1
            r >>= 1
        return x


N = int(input())
h = list(map(int, input().split()))
a = list(map(int, input().split()))

dp = RMQ(N+1, init_value=-float('inf'), segfunc=max)
dp.update(0, 0)
for i in range(N):
    k = dp.query(0, h[i])
    l = dp.query(h[i], h[i]+1)
    dp.update(h[i], max(l, k + a[i]))
ans = dp.query(0, N+1)
print(ans)
