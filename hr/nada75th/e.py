s = input()
l = len(s)

S = [0] * l
ing = [0] * l
for i in range(l):
    if s[i]=="S": S[i] = 1
    elif i>1 and s[i-2:i+1]=="ing": ing[i] = 1

for i in range(l-1): ing[l-i-2] += ing[l-i-1]

ans = 0
for i in range(l): ans += S[i] * ing[i]
print(ans)
