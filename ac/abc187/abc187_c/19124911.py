n = int(input())
ss = [input() for i in range(n)]

y = dict()
n = dict()
for s in ss: 
	if s[0]=='!':
		t = s[1:]
		if t in y:
			print(t)
			exit()
		if s in n: n[s] += 1
		else: n[s] = 0
	else:
		t = '!' + s
		if t in n:
			print(s)
			exit()
		if s in y: y[s] += 1
		else: y[s] = 0
print("satisfiable")
