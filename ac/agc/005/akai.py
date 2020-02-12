x = "T"+input()+"S"
ans = len(x)-2
s = t = 0
for i in x:
    if i=="S":
        ans -= min(s,t)*2
        if s>t:
            s -= t
            t = 0
        else: t = s = 0
        s += 1
    else: t += 1
print(ans)

