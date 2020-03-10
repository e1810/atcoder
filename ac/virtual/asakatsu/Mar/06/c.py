n, s = int(input()), input()
ans = 0
for i in s: ans += max(0, ord("E")-ord(i))
print(ans/n)
