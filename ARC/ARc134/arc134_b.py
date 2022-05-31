class RMQ:
    def __init__(self, n, init_value=float('inf')):
        x = 1
        while n >= x:
            x <<= 1 
        self.n = x
        self.INF = init_value
        self.dat = [init_value] * 2 * self.n
        self.index = [init_value] * 2 * self.n
        self.lazy = [init_value] * 2 * self.n

    def set(self, i, x):
        self.dat[i + self.n - 1] = x

    def build(self):
        for k in range(self.n - 2, -1, -1):
            self.dat[k] = min(self.dat[2 * k + 1], self.dat[2 * k + 2], key=lambda x: (x[0], x[1]))

    def eval(self, k):
        if self.lazy[k] == self.INF:
            return
        if k < n - 1:
            self.lazy[k * 2 + 1] = self.lazy[k]
            self.lazy[k * 2 + 2] = self.lazy[k]
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
            self.dat[k] = min(self.dat[k * 2 + 1], self.dat[k * 2 + 2], key=lambda x: (x[0], x[1]))
        
    # [a, b)
    def find(self, a, b):
        return self.find_sub(a, b, 0, 0, self.n)

    # k:現在見てるノードの位置 [l, r): dat[k]が表している位置
    def find_sub(self, a, b, k, l, r):
        if r <= a or b <= l:
            return self.INF
        elif a <= l and r <= b: 
            return self.dat[k]
        else:
            vl = self.find_sub(a, b, k * 2 + 1, l, (l + r) // 2)
            vr = self.find_sub(a, b, k * 2 + 2, (l + r) // 2, r)
            return min(vl, vr)


N = int(input())
S = list(input())

rmq = RMQ(N, [float('inf'), -1])
for i, s in enumerate(S):
    rmq.set(i, [ord(s), -i])
rmq.build()

r = N
for l in range(N):
    if l >= r: 
        break
    f = rmq.find(l, r)
    if S[l] == S[-f[1]]:
        continue
    r = -f[1]
    S[l], S[r] = S[r], S[l]
print(''.join(S))
