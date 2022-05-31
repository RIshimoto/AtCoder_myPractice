def solve(N, A, B):
    from collections import defaultdict

    def is_distinct():
        dd_a = defaultdict(int)
        for a in A:
            dd_a[a] += 1

        dd_b = defaultdict(int)
        for b in B:
            dd_b[b] += 1

        for k, v in dd_a.items():
            if dd_b[k] != v:
                return False
        return True

    def is_same_factor():
        dd_a = defaultdict(int)
        for a in A:
            dd_a[a] += 1
        for k, v in dd_a.items():
            if v >= 2:
                return True
        return False

        
    def get_inversion_number(X):
        n = len(X)
        cnt = 0
        for i in range(n-1): 
            for j in range(i+1, n):
                if X[i] > X[j]:
                    cnt += 1
        return cnt

    if is_distinct() == False:
        return "No"

    if is_same_factor() == True:
        return "Yes"

    ia = get_inversion_number(A)
    ib = get_inversion_number(B)
    if ia % 2 == ib % 2:
        return "Yes"
    else:
        return "No"

if __name__ == '__main__':
    N = int(input())
    A = list(map(int, input().split()))
    B = list(map(int, input().split()))
    ans = solve(N, A, B)
    print(ans)
