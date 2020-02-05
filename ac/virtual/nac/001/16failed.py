cnt = []
tmp = 0
prev = "-"
for c in input():
    if prev==c: tmp += 1
    else:
        cnt.append(tmp)
        tmp = 1
    prev = c
cnt[0] = tmp
ans = 0
for i in cnt:
    ans += i//3*2+(i%3>0)
print(ans)

