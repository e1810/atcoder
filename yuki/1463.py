n, k = map(int, input().split())
a = list(map(int, input().split()))

st = set()
for i in range(1<<n):
	tmp = cnt = 0
	for j in range(n):
		if (i>>j)&1:
			tmp += a[j]
			cnt += 1
	if cnt>=k:
		st.add(tmp)

for i in range(1<<n):
	tmp = 1
	cnt = 0
	for j in range(n):
		if (i>>j)&1:
			tmp *= a[j]
			cnt += 1
	if cnt>=k:
		st.add(tmp)

print(len(st))
