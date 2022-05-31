def solve(N, L):
    def base10int(value, base):
        if (int(value / base)):
            return base10int(int(value / base), base) + str(value % base)
        return str(value % base)

    ans = []
    for i in range(N):
        n = 2*3**(L-1) + i 
        s = base10int(n, 3)
        t = s.translate(str.maketrans({'2':'0', '1':'2', '0':'1'}))
        u = s.translate(str.maketrans({'0':'2', '1':'0', '2':'1'})) 
        ans.append(s)
        ans.append(t)
        ans.append(u)
    return ans
            
    

if __name__ == '__main__':
    N, L = map(int, input().split())
    ans = solve(N, L)
    for i in range(3*N):
        print(''.join(ans[i]))
