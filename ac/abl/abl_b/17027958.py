a, b, c, d = map(int, input().split())
if c<=b and a<=d: print("Yes")
elif a<=d and c<=b: print("Yes")
else: print("No")
