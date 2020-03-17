
n, L, *a = map(int, open(0).read().split())

cant = 0
for i in range(n-1):
    if a[i]+a[i+1]>=L:
        l, r = i, i+1
        break
else: cant = 1

if cant: print("Impossible")
else:
    print("Possible")
    for i in range(l): print(i+1)
    for i in range(n-2, l-1, -1): print(i+1)
