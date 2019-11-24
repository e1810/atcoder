n, m = map(int, input().split())
ab = [list(map(int, input().split())) for i in range(m)]
ab.sort(key=lambda x:x[1])

rmvd = [1]*(n-1)
for a, b in ab:
    if all(rmvd[a-1:b-1]): rmvd[b-2] = 0
print(n-1 - sum(rmvd))
