def solve(N, K):
    def f(x):
        st = set()
        ret = x
        while x not in st:
            st.add(x)
            x = int(str(x)[::-1])
            ret = min(ret, x)
        return ret
    if f(K) != K:
        return 0

    cnt = 0
    que = []
    que.append(str(K))
    st = set()
    st.add(K)
    while len(que) != 0:
        k = que.pop()
        if int(k) <= N:
            cnt += 1
        nextk = str(int(k[::-1]))
        while int(nextk) <= N:
            if int(nextk) not in st:
                que.append(nextk)
                st.add(int(nextk))
            nextk = nextk + '0'
    return cnt

if __name__ == '__main__':
    N, K = map(int, input().split())
    ans = solve(N, K)
    print(ans)
