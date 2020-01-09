s, t, f = [0]*26, [0]*26, 0
for c in input(): s[ord(c)-97]+=1
for c in input(): t[ord(c)-97]+=1
for i in range(26): f |= (s[i]!=t[i])&bool(s[i])&bool(t[i])
print("YNeos"[f::2])
