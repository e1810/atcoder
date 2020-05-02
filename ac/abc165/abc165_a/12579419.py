k, a, b = map(int, open(0).read().split())
cant = True
for i in range(a, b+1):
    if i%k==0: cant = False
print("ONKG"[cant::2])
