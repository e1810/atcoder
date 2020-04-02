
n, *a = map(int, open(0).read().split())
b, c = zip(*sorted([(a[i],i+1)for i in range(n)]))
print(*c[::-1])
