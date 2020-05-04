n, *a = map(int, open(0).read().split())
cnt = [0] * 100000
for x in a: cnt[x] += 1
ans = 0
for i in range(99998):
    ans = max(ans, cnt[i]+cnt[i+1]+cnt[i+2])
print(ans)
