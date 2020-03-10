n, *d = map(int, open(0).read().split())
d.sort()
print(d[n//2]-d[n//2-1])
