s, t = list(input()[::-1]), list(input()[::-1])
for i in range(len(s) - len(t) + 1):
    for j in range(len(t)):
        if s[i+j]!=t[j] and s[i+j]!="?": break
    else:
        for j in range(len(t)): s[i+j] = t[j]
        break
else: print("UNRESTORABLE");exit()
print("".join(s).replace("?", "a")[::-1])
