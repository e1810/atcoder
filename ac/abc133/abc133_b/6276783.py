
n, d = map(int,input().split())
xs = [list(map(int,input().split())) for i in range(n)]
ans = 0
for i in range(n):
  for j in range(n-i-1):
    a, b = xs[i], xs[i+j+1]
    tmp = 0
    for k in range(d): tmp += (a[k]- b[k])**2
    if (tmp**0.5)%1==0: ans+=1
print(ans)
