h, w = map(int, input().split())
s = [input().split() for i in range(h)]
for i in range(h):
    for j in range(w):
        if s[i][j]=="snuke":
            print(chr(ord('A')+j)+str(i+1))
