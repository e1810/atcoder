
h, w, k = map(int, input().split())
s = [list(input()) for i in range(h)]


stack1 = []
stack2 = []
ans = [[0]*w for i in range(h)]
n = 1
fff = True
for i in range(h):
    first = True
    if s[i] == ["."]*w:
        if fff: stack1.append(i)
        else: stack2.append(i)
        continue
    else: fff = False
    for j in range(w):
        if s[i][j]==".":
            ans[i][j] = n
        else:
            if first:
                ans[i][j] = n
                first=False
            else:
                n += 1
                ans[i][j] = n
    n += 1

for i in stack1[::-1]:
    for j in range(w): ans[i][j] = ans[i+1][j]
for i in stack2:
    for j in range(w): ans[i][j] = ans[i-1][j]

for i in ans: print(*i)
