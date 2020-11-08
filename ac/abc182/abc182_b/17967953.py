n, *a = map(int, open(0).read().split())
cnt = [0] * 1010
for x in a:
    for i in range(2, x+1):
        if x%i==0: cnt[i] += 1
ans = 0
for i in range(1010):
    if cnt[ans]<=cnt[i]:
        ans = i
print(ans)
