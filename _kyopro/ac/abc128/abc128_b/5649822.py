
n = int(input())
sp = [input().split() for _ in range(n)]
ps = [[p,s] for s,p in sp]
pn = {sp[1]:i+1 for i,sp in enumerate(sp)}

ps.sort(key=lambda x:int(x[0]), reverse=True)
ps.sort(key=lambda x:x[1])

for p, s in ps:
    print(pn[p])
