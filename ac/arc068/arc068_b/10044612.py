
n, *a = map(int, open(0).read().split())
a.sort()
cnt = -1
prev = a[0]
b = []
for i in a:
    if prev==i: cnt+=1
    else:
        b.append(cnt)
        cnt = 0
    prev = i
b.append(cnt)
print(n-(sum(b)+1)//2*2)
