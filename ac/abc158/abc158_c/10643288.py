
a,b=map(int,input().split())
for i in range(10**6):
 if i//12.5==a and i//10==b:print(i);exit()
print(-1)
