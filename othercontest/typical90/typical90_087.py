N, P, K = map(int, input().split())
A = [list(map(int, input().split())) for _ in range(N)]

def count_number(x):
    dist = [[0 for _ in range(N)] for _ in range(N)]
    for i in range(N):
        for j in range(N):
            if A[i][j] == -1:
                dist[i][j] = x 
            else:
                dist[i][j] = A[i][j]

    for k in range(N):
        for i in range(N):
            for j in range(N):
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j])
    cnt = 0
    for i in range(N):
        for j in range(i+1, N):
            if dist[i][j] <= P:
                cnt += 1
    return cnt

def get_border(cnts):
    cl = 1
    cr = 5*10**9
    minx = 5*10**9
    for i in range(40):
        cm = (cl + cr) // 2
        res = count_number(cm)
        if res <= cnts:
            cr = cm
            minx = min(minx, cm)
        else:
            cl = cm
    return minx

if __name__ == '__main__':
    L = get_border(K)
    R = get_border(K - 1)
    if R - L >= 2 * 10 ** 9:
        print("Infinity")
    else:
        print(R - L)
