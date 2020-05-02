
s = input()
pre = ""
suf = ""
rev = False

for i in range(int(input())):
        q = input().split()
        if len(q)==1: rev = not rev
        else:
                t, f, c = q
                f = int(f)
                if rev: f += 1
                f %= 2
                if f: pre += c
                else: suf += c
if rev: print(suf[::-1] + s[::-1] + pre)
else: print(pre[::-1] + s + suf)
