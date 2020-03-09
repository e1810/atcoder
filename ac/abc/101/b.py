n = input()
s = sum(map(int, list(n)))
print("YNeos"[int(n)%s!=0::2])
