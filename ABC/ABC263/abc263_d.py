class RMQ:
    # N: 要素数
    def __init__(self, N, init_value=float('inf'), segfunc=max):
        self.n = 2**(N-1).bit_length()
        self.INF = init_value
        self.segfunc = segfunc
        self.data = [init_value] * (2 * self.n)

    def set(self, i, x):
        self.data[i + self.n] = x

    def build(self):
        for k in range(self.n-1, 0, -1):
            self.data[k] = self.segfunc(self.data[k<<1|0], self.data[k<<1|1])

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

def solve(N, L, R, A):
    rmq = RMQ(N+1, init_value=float('inf'), segfunc=min)
    for i, a in enumerate(A):
        rmq.set(i, a)
    rmq.build()

    mn = rmq.query(0, N)
    mn_x = 0
    for x in range(1, N+1):
        sum = rmq.query(x, N)
        if L * x + sum < mn:
            mn = L * x + sum
            mn_x = x
    for x in range(mn_x):
        rmq.update(x, L)

    mn_y = 0
    for y in range(1, N+1):
        sum = rmq.query(0, N-y)
        if R * y + sum < mn:
            mn = R * y + sum
            mn_y = y
    return mn

if __name__ == '__main__':
    N, L, R = map(int, input().split())
    A = list(map(int, input().split()))
    ans = solve(N, L, R, A)
    print(ans)
