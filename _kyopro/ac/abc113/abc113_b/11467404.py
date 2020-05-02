
#!/usr/bin/env python3
n, t, a, *h = map(int, open(0).read().split())
mni = 0
mn = 1e18
for i in range(n):
	if mn>=abs(t-h[i]*0.006 - a):
		mn = abs(t-h[i]*0.006 - a)
		mni = i
print(mni+1)
