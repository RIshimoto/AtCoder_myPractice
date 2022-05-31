from bisect import bisect
N, M = map(int, input().split())
A = list(map(int, input().split()))
B = list(map(int, input().split()))
C = list(map(int, input().split()))
D = list(map(int, input().split()))


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


if __name__ == '__main__':
    coordinate_compression = lambda x: { v: i for i, v in enumerate(sorted(set(x)), 1) }
    ccAC = coordinate_compression(A + C)
    ccBD = coordinate_compression(B + D)
    p = sorted([(ccAC[a], ccBD[b]) for a, b in zip(A, B)], reverse=True)
    q = sorted([(ccAC[c], ccBD[d]) for c, d in zip(C, D)], reverse=True)

    MAX = max(ccBD.values())
    bit = BIT(MAX)
    qi = 0
    for i in range(N):
        x, y = p[i]
        while qi < M and q[qi][0] >= x:
            bit.add(q[qi][1], 1)
            qi += 1

        l = bit.sum(y, MAX)
        if l == 0:
            print("No")
            exit()
        r = MAX
        l = y - 1
        while  r - l > 1:
            mid = (r + l) // 2
            if bit.sum(y, mid) > 0:
                r = mid
            else:
                l = mid
        bit.add(r, -1)
    print("Yes")
