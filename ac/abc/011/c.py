n, *a = [int(input())for i in range(4)]
f = n in a

for i in range(100):
    n -= 3
    if n in a:
        n += 1
        if n in a:
            n += 1
            if n in a:
                n += 1
print("YNEOS"[n>0 or f::2])

