def solve(T, Ns):
    def list2int(lst):
        ret = 0
        for n in lst:
            ret = ret * 10 + n
        return ret

    anses = []
    for i in range(T):
        N = list(map(int, Ns[i]))
        n = len(N)
        #sqn = int(n**0.5)
        ans = 0
        for k in range(1, n):
            if n % k == 0:
                m = n // k
                output = [N[i:i + k] for i in range(0, n, k)]
                i = 0
                while i + 1 < m and output[i] == output[i+1]:
                    i += 1
                if i + 1 >= m or output[i] < output[i+1]:
                    s = str(list2int(output[i])) * m
                else:
                    if list2int(output[i]) == 1:
                        s = '9' * (m-1)
                    else:
                        s = str(list2int(output[i]) - 1) * m
                ans = max(ans, int(s))
        anses.append(ans)
    return anses

if __name__ == '__main__':
    T = int(input())
    N = [input() for _ in range(T)]
    ans = solve(T, N)
    print(*ans)
