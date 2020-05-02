n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
a = sorted([a[i]-b[i] for i in range(n)])

ans = 0
for i in range(n):
	l, r = i, n
	while r-l>1:
		mid = (l+r)//2
		if a[i]+a[mid]>0: r = mid
		else: l = mid
	ans += n-r-(i==r)
print(ans)
