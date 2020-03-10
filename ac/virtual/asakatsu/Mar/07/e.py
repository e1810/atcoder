n = int(input())

pairs = list(map(tuple, "bcBC dwDW tjTJ fqFQ lvLV sxSX pmPM hkHK ngNG zrZR".split()))
ans = ""
for c in input():
	put = " "
	for i in range(10):
		if c in pairs[i]:
			put = str((i+1)%10)
			break
	else:
		if c!=" ": continue
	ans += put
print(" ".join(ans.split()))
