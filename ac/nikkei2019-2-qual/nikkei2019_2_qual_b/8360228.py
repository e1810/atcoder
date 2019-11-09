
n, *a = map(int, open(0).read().split())
if a[0]!=0:
    print(0)
    exit()

b = [0]*n
for i in a: b[i]+=1

if b[0]!=1:
    print(0)
    exit()

ans = 1
i = 0
while i<n-1:
    if b[i]==0:
        if sum(b[i:])>0:
            print(0)
            exit()
        else:
            break
    ans *= b[i]**b[i+1]
    i += 1

print(ans%998244353)
