k, n, *a = map(int, open(0).read().split())
a.append(k+a[0])
b = [a[i+1]-a[i]for i in range(n)]
print(k-max(b))
