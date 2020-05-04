n = int(input())
s = [list(input()) for i in range(n)]

for i in range(n-2, -1, -1):
    for j in range(2*n-1):
        if s[i][j]==".": continue
        if j>0 and s[i+1][j-1]=="X": s[i][j] = "X"
        if s[i+1][j]=="X": s[i][j] = "X"
        if j<2*n-2 and s[i+1][j+1]=="X": s[i][j] = "X"
for i in s: print("".join(i))
