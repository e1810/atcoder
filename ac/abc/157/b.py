a = [list(map(int, input().split())) for i in range(3)]
n = int(input())
for i in range(n):
	x = int(input())
	for j in range(3):
		for k in range(3):
			if a[j][k]==x: a[j][k] = 0
ans = dcnt1 = dcnt2 = 0
for i in range(3):
	vcnt = hcnt = 0
	for j in range(3):
		if a[i][j]==0: vcnt += 1
		if a[j][i]==0: hcnt += 1

	if a[i][i]==0: dcnt1 += 1
	if a[2-i][i]==0: dcnt2 += 1
	if vcnt==3 or hcnt==3: ans = 1
if dcnt1==3 or dcnt2==3: ans = 1

if ans: print("Yes")
else: print("No")

