n, *a = map(int, open(0).read().split())

cnt = ans = 0
prev = 0
for i in a:
    if prev>i:
        ans = max(ans, cnt)
        cnt = 0
    cnt += 1
    prev = i
print(max(ans, cnt))
