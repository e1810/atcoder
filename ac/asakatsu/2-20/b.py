n, *a = map(int, open(0).read().split())

for i in range(n): a[i] -= a[0]

mx = cant = 0
for i in range(n):
    mx = max(mx, a[i])
    if a[i]<mx-1: cant = True
print("YNeos"[cant::2])
