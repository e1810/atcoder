a, b, c, n, *x = map(int, open(0).read().split())
print("YNeos"[sum(x)>a*10000+b*5000+c*1000::2])
