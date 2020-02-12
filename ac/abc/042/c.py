n, k, *d = map(int, open(0).read().split())
d = set(d)

while 1:
    for i in str(n):
        if int(i) in d: break
    else:
        print(n)
        break
    n += 1
