import sys
sys.setrecursionlimit(10**6)

class RMQ:
    def __init__(self, n, init_value=float('inf')):
        x = 1
        while n >= x:
            x <<= 1 
        self.n = x
        self.INF = init_value
        self.dat = [init_value] * (2 * self.n - 1)
        self.lazy = [init_value] * (2 * self.n - 1)

    def set(self, i, x):
        self.dat[i + self.n - 1] = x

    def build(self):
        for k in range(self.n - 2, -1, -1):
            self.dat[k] = max(self.dat[2 * k + 1], self.dat[2 * k + 2])

    def eval(self, k): # 配列のk番目を更新
        if self.lazy[k] == self.INF:
            return  # 更新するものが無ければ終了
        if k < self.n - 1:             # 葉でなければ子に伝搬
            self.lazy[k * 2 + 1] = self.lazy[k]
            self.lazy[k * 2 + 2] = self.lazy[k] #自身を更新
        self.dat[k] = self.lazy[k]
        self.lazy[k] = self.INF

    def update(self, a, b, x):
        self.update_sub(a, b, x, 0, 0, self.n)

    def update_sub(self, a, b, x, k, l, r):
        self.eval(k)
        if a <= l and r <= b:
            self.lazy[k] = x
            self.eval(k)
        elif a < r and l < b:
            self.update_sub(a, b, x, k * 2 + 1, l, (l + r) // 2)
            self.update_sub(a, b, x, k * 2 + 2, (l + r) // 2, r)
            self.dat[k] = max(self.dat[k * 2 + 1], self.dat[k * 2 + 2])
        
    # [a, b)
    def find(self, a, b):
        return self.find_sub(a, b, 0, 0, self.n)

    # k:現在見てるノードの位置 [l, r): dat[k]が表している位置
    def find_sub(self, a, b, k, l, r):
        self.eval(k)
        if r <= a or b <= l:
            return self.INF
        elif a <= l and r <= b: 
            return self.dat[k]
        else:
            vl = self.find_sub(a, b, k * 2 + 1, l, (l + r) // 2)
            vr = self.find_sub(a, b, k * 2 + 2, (l + r) // 2, r)
            return max(vl, vr)

    def print(self):
        for i in range(2 * self.n - 1):
            print(self.dat[i], end="")
            print(",", end="")
        print()

def solve():
    W, N = map(int, input().split())
    rmq = [RMQ(W, init_value=-float('inf'))] * (N+1)
    dp = [-float('inf') for _ in range(W+1)]
    rmq[0].update(0, 1, 0)
    dp[0] = 0
    for i in range(1, N+1):
        L, R, V = map(int, input().split())
        for j in range(W+1):
            cl = max(0, j - R)
            cr = max(0, j - L + 1)
            if cl == cr:
                continue
            val = rmq[i-1].find(cl, cr)
            if val != -float('inf'):
                dp[j] = max(dp[j], val + V)
        for j in range(W+1):
            rmq[i].update(j, j + 1, dp[j])

    if dp[W] == -float('inf'):
        print(-1)
    else:
        print(dp[W])

if __name__ == '__main__':
    solve()
