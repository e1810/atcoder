n, k = map(int, input().split())
ans = 1
w = 1
while n-w>0:
    blw = (w+k-1)//k
    w += blw
    if n-w>=0: ans+=1
print(ans)
