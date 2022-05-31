import bisect
N, K = map(int, input().split())
A = list(map(int, input().split()))

def count_number(x):
    is_ok = [[False for _ in range(N)] for _ in range(N)]
    r = 0
    for l in range(N):
        while r < N and A[r] * A[l] < x:
            is_ok[l][r] = True
            r += 1
        if r == l:
            r += 1
    cnt = N
    for i in range(N):
        if is_ok[i][i]:
            cnt -= 1
    return cnt // 2
    
def get_border():
    l = -10**18
    r = 10**18
    for _ in range(40):
        mid = (l + r) // 2
        k = count_number(mid)
        pass


if __name__ == '__main__':
    minA = min(A)
    for i in range(N):
        A[i] -= minA
    A.sort()
    count_number(10)
    
