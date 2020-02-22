n = list(map(int, input()[::-1]))

ans = f = go = cnt = 0
if n[0]==5: ans+=1
for i in n:
    if go:
        if i>5:
            ans += 9-i-f+4*cnt+1
            f = 1
            go = 0
            cnt = 0
        elif i+f==5:
            cnt += 1
            f = 0
            go = 1
        else:
            ans += i+f+5*cnt
            f = 0
            go = 0
            cnt = 0
    elif i+f>5:
        ans += 10-i-f
        f = 1
        go = 0
    elif i+f==5:
        cnt = 1
        f = 0
        go = 1
    else:
        ans += i+f
        f = 0
        go = 0

if go: print(ans+f+4*cnt+1)
else: print(ans+f)
