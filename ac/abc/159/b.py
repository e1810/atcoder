s = input()
n = len(s)
t = s[:(n-1)//2]
u = s[(n+3)//2-1:]
if s==s[::-1] and t==t[::-1] and u==u[::-1]: print("Yes")
else: print("No")
