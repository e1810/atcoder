
n, m = map(int, input().split())
sc = [list(map(int, input().split())) for i in range(m)]

for i in range(1000):
        x = str(i)
        if len(x)!=n: continue
        can = 1
        for s,c in sc:
                if int(x[s-1])!=c: can = 0
        if can:
                print(i)
                break
else: print(-1)
