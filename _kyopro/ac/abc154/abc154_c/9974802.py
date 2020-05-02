
n, *a = map(int, open(0).read().split())
print("YNEOS"[len(set(a))!=len(a)::2])
