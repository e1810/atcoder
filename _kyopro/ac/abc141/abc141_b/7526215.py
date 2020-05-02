
s = input()
n = s[1::2]
o = s[::2]
cnt = 0
r = set(list("DRU"))
l = set(list("DLU"))
if set(o) | r == r: cnt+=1
if set(n) | l == l: cnt+=1
if cnt==2: print("Yes")
else: print("No")
