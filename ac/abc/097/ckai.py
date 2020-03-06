s = input()
k = int(input())
l = len(s)
subl = 1

cand = set()
while k>0:
	for i in range(l-subl+1):
		cand.add(s[i:i+subl])
		k -= 1
	subl += 1
	print(cand)
print(list(cand)[-1])
