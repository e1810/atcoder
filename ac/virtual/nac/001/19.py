n, *a = map(int, open(0).read().split())
ans = 0
for i in a:
    cnt = 0
    while i%2==0:
            i //= 2
            cnt += 1
    ans += cnt
print(ans)
