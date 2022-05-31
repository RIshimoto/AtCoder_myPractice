N, K = map(int, input().split())
A = list(map(int, input().split()))

K += 1
n = 40
x = 0
def calc(k, dig):
    if dig == -1:
        r = 0
    elif ((k & (1 << dig)) == 0:
    elif k == (1 << (dig + 1)) - 1):
    else:
        for i in range(n):
            if (a[i] & (1 << dig)) != 0:
                w += 1
        r = max(w * (
    return r
"""
    for i in range(n, -1, -1):
        # Kのiビット目が1
        if ((K >> i) & i) == 1:
            # i桁目を０にすると残りは自由に選べる
            # 0にする場合
            x += 2 ** i  
            for j in range(i, -1, -1):
                one = 0
                for a in A:
                    if ((a >> i) & 1) == 1:
                        one += 1
                zero = N - one
                if one > zero:
                    x += 2 ** i  
            # 1にする場合
            x += 2 ** i  
        # Kのiビット目が0
        else:
            # i桁目は１にできない
            for j in range(i, -1, -1):
                one = 0
                for a in A:
                    if ((a >> i) & 1) == 1:
                        one += 1
                zero = N - one
                if one > zero:
                    x += 2 ** i  
"""

if __name__ == '__main__':
    ans = 0
    for a in A:
        ans += (a ^ x) 
    print(ans)
