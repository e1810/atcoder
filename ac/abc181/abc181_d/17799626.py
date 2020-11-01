cnt = [0] * 10
s = input()
if len(s)==1:
    if int(s)%8==0: print("Yes")
    else: print("No")
    exit()
elif len(s)==2:
    if int(s)%8==0 or int(s[::-1])%8==0: print("Yes")
    else: print("No")
    exit()

for c in s:
    cnt[int(c)] += 1

ng = True
for i in range(8, 1000, 8):
    tmp = [0] * 10
    for j in range(3-len(str(i))):
        tmp[0] += 1
    for c in str(i):
        tmp[int(c)] += 1

    ok = True
    for j in range(10):
        if cnt[j]<tmp[j]:
            ok = False
    if ok:
        ng = False

print("YNeos"[ng::2])
