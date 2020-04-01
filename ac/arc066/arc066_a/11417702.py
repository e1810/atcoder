
from collections import Counter
n, *a = map(int, open(0).read().split())
a = Counter(a)

if n%2==0:
        i = cant = 0
        for v, c in sorted(a.items()):
                if 2*i+1!=v or c!=2: cant = True
                i += 1
else:
        i = cant = 0
        for v, c in sorted(a.items()):
                if i==0: cant = (c!=1)
                elif 2*i!=v or c!=2:  cant = True
                i += 1

if cant: print(0)
else: print(pow(2, n//2, 1000000007))
