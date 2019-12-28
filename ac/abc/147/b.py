s = input()
t = s[::-1]
print(sum([s[i]!=t[i] for i in range(len(s))])//2)
