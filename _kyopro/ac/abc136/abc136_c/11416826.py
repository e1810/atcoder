
n, *k = map(int, open(0).read().split())
mx = cant = 0
for i in k:
        mx = max(mx, i)
        if mx-i>1: cant = True
print("YNeos"[cant::2])
