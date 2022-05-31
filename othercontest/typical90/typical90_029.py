from collections import defaultdict
W, N = map(int, input().split())
LR = [map(int, input().split()) for _ in range(N)]
L, R  = [list(i) for i in zip(*LR)]

def solve():
    x = [] 
    for i in range(N):
        x.append(L[i])
        x.append(R[i])
    compress = lambda x : { v: i for i, v in enumerate(sorted(set(x))) } 
    compressed = compress(x)

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

    rmq = RMQ(max(compressed.values()), init_value=0)
    for i in range(N):
        l, r = compressed[L[i]], compressed[R[i]] + 1
        h = rmq.find(l, r) + 1
        rmq.update(l, r, h)
        print(h)

if __name__ == '__main__':
    solve()
