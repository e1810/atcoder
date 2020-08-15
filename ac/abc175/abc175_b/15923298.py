n, *l = map(int, open(0).read().split())
ans = 0
for i in range(n):
    for j in range(i+1, n):
        for k in range(j+1, n):
            if(l[i]==l[j] or l[j]==l[k] or l[k]==l[i]): continue
            if(l[i]+l[j]<=l[k] or l[j]+l[k]<=l[i] or l[k]+l[i]<=l[j]): continue
            ans += 1
print(ans)
