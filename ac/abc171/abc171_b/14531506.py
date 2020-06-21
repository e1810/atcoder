n, k, *p = map(int, open(0).read().split())
p.sort()
print(sum(p[:k]))
