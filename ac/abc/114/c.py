n = int(input())
cand = list("357")
stk = ["0"]
ans = 0
while stk:
    tmp = stk.pop()
    if len(tmp)==10:
        if 0<int(tmp)<=n and tmp.count("3") and tmp.count("5") and tmp.count("7"):
            ans += 1
    else:
        if int(tmp)==0: stk.append(tmp+"0")
        for i in cand: stk.append(tmp+i)
print(ans)

