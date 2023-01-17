import bisect
N = int(input())
c = [int(input()) for _ in range(N)]

def solve(a):
    b = [a[0]]
    cnt = 0
    for v in a[1:]:
        if b[-1] < v:
            b.append(v)
        else:
            cnt += 1
            i = bisect.bisect_left(b, v)
            b[i] = v
    return cnt

ans = solve(c)
print(ans)
