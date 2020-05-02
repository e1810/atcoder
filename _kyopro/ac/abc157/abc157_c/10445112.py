
n, m = map(int, input().split())
sc = [list(map(int, input().split())) for i in range(m)]

ans = -1
for i in range(1000):
        can = 1
        t = str(i)
        if len(t)!=n: continue
        for s,c in sc:
                if int(t[s-1])!=c: can = 0
        if can:
                ans = i
                break

if ans<0: print(-1)
else: print(ans)
