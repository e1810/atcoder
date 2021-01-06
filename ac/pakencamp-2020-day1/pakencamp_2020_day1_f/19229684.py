p = int(input())
if p==1:
  print(1)
  exit()
m = [[False]*p for i in range(p)]
prpr = pr = 1
for i in range(3, p*p+100):
  now = (prpr + pr) % p
  if now==0:
    print(i)
    exit()
  if m[now][pr]:
    print(-1)
    exit()
  m[now][pr] = True
  prpr, pr = pr, now
  
