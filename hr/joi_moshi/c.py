n = int(input())
c, v = [[]for i in range(n)], [[]for i in range(n)]
for i in range(n):
    ccvv = input().split()
    c[i], v[i] = ccvv[0], int(ccvv[1])

ans = tmp = 0
prev = firstc = c[0]
for i in range(1, n):
    if prev==c[i]:
        if prev==firstc:
            ans = max(ans, tmp-v[i-1])
            tmp = v[i]
        else:
            ans = max(ans, tmp)
            tmp = v[i]
    else:
        tmp += v[i]
    prev = c[i]

print(ans)

