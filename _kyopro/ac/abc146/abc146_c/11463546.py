
#!/usr/bin/env python3
a, b, x = map(int, input().split())
l, r = 0, 1000000001
while r-l>1:
	mid = (l+r)//2
	if a*mid + b*len(str(mid))<=x: l = mid
	else: r = mid
print(l)
