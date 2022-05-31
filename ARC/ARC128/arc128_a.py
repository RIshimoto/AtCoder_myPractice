def solve(N, A):
    v = [0] * N
    i = 0
    while i < N:
        while i + 1 < N and A[i] < A[i+1]:
            i += 1
        if i + 1 < N:
            v[i] = 1
            while i + 1 < N and A[i] >= A[i+1]:
                i += 1
            v[i] = 1
        i += 1
    return v

if __name__ == '__main__':
    N = int(input())
    A = list(map(int, input().split()))
    v = solve(N, A)
    print(*v)
