n, *a = map(int, open(0).read().split())
mx = tmp = 0
for i in a:
    if i: tmp+=1
    else:
        mx=max(mx,tmp)
        tmp=0
mx=max(mx,tmp)
print(mx+1)
