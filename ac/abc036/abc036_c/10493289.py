
n,*a=map(int,open(0).read().split())
dct={v:i for i,v in enumerate(sorted(set(a)))};
for i in a:print(dct[i])
