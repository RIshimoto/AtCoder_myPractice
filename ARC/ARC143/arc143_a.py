def solve(A, B, C):
    A, B, C = sorted((A, B, C), reverse=True)

    if A <= B + C:
        return A
    else:
        return -1

if __name__ == '__main__':
    A, B, C = map(int, input().split())
    ans = solve(A, B, C)
    print(ans)
