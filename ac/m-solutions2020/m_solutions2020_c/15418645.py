n, k, *a = map(int, open(0).read().split())

for i in range(k, n):
    if a[i]<=a[i-k]: print("No")
    else: print("Yes")
