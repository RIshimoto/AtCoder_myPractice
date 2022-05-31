import bisect
import array
L, Q = map(int, input().split())

def solve():
    tab = array.array('i', [0, L])
    for _ in range(Q):
        c, x = map(int, input().split())
        if c == 1:
            bisect.insort(tab, x)
        elif c == 2:
            i=bisect.bisect_right(tab, x)
            print(tab[i]-tab[i-1])

if __name__ == '__main__':
    solve()
