N = int(input())
a = list(map(int, input().split()))

cnt = 0
que = [(-1, -1)]
for i in range(N):
    k, v = que[-1]
    if k == a[i]:
        que.pop()
        v += 1
        cnt += 1
        if v == a[i]:
            cnt -= v
        else:
            que.append((k, v))
    else:
        que.append((a[i], 1))
        cnt += 1
    print(cnt)
    
