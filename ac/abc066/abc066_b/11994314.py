
s = input()
ans = 0
for i in range(len(s)):
        t = s[:i]
        if t[:i//2]*2==t: ans = i
print(ans)
