n=int(input())
ans = 1
for i in range(2, int(n**0.5)+1):
    if (n/i)%1==0: ans=0
print("YNeos"[ans::2])
