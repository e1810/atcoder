n, *a = map(int, open(0).read().split())
ave = sum(a)/n
if ave%1:
    print(-1)
    exit()

ans = tmp = cnt = 0
for i in a:
    tmp += i
    cnt += 1
    if tmp/cnt==ave:
        ans += cnt-1
        tmp = cnt = 0
print(ans)
