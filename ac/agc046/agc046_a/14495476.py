x = int(input())
d, k = x, 1
while True:
    if d%360==0:
        print(k)
        break
    d += x
    k += 1
