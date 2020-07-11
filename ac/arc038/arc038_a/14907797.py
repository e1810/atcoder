n,*a=map(int,open(0).read().split())
print(sum(sorted(a, reverse=True)[::2]))
