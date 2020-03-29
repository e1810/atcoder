n, *a = map(int, open(0).read().split())
zero = 0
minus = 0
for i in a:
	if i==0: zero += 1
	if i<0: minus += 1
b = [abs(i)for i in a]

if minus%2==0 or zero>0: print(sum(b))
else: print(sum(b)-min(b)*2)
