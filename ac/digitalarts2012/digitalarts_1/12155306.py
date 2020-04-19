
ss = input().split()
for i in range(int(input())):
        t = input()
        for i in range(len(ss)):
                s = ss[i]
                if len(s)!=len(t): continue
                for j in range(len(s)):
                        if(t[j]!="*" and s[j]!=t[j]): break
                else: ss[i] = "*" * len(s)
print(*ss)
