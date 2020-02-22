n, *a = map(int, open(0).read().split())
flag = False
for i in range(n):
    if a[i]%2==0:
        if a[i]%3 and a[i]%5: flag = True
if flag==False: print("APPROVED")
else: print("DENIED")
