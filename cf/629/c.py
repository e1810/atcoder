for qq in range(int(input())):
	l = int(input())
	n = input()
	m = str(int(n)//2)
	try: i = n.index("1")
	except: i = l+1
	if i==0:
		print("2" + "0"*(l-1))
		print("2" + n[1:])
	elif i>l:
		print(m)
		print(m)
	else:
		print(m[:i] + "1" + "0"*(l-i-1))
		print(m[:i] + "0" + n[i+1:])

			
