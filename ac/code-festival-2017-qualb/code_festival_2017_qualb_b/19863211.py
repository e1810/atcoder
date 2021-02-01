from collections import Counter
n = int(input())
d = Counter(input().split())
m = int(input())
t = Counter(input().split())

ng = False
for k,v in t.items():
	if not k in d: ng = True
	if d[k]<v: ng = True
print("YNEOS"[ng::2])
