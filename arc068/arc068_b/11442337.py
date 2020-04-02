
#!/usr/bin/env python3
from collections import Counter
n, *a = map(int, open(0).read().split())
a = [0] + list(list(zip(*Counter(a).items()))[1]) + [1]
for i in range(len(a)-1): a[i+1] = a[i+1]+a[i]-1
ans = 0
li = len(a)-1
for i in range(1, li):
	tmp = abs(a[li]-a[i]-a[i-1])
	x = a[i]-a[i-1]
	if tmp>=x: cnt = tmp-x
	else: cnt = (x-tmp)%2
	ans = max(ans, li-1-cnt)
print(ans)
