K = int(input())

ans = []
while K > 0:
    if K & 1:
        ans.append("2")
    else:
        ans.append("0")
    K = K >> 1
ans.reverse()
print(''.join(ans))
