
a,b=map(int,input().split())
for i in range(1000000):
        if i//12.5==a and i//10==b:print(i);exit()
print(-1)
