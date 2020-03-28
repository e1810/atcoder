
x, y, a, b, c = map(int, input().split())
pqr = [map(int, input().split()) for i in range(3)]

A = []
for i in range(3):
        for j in pqr[i]:
                A.append([j, i])
A.sort(key=lambda x:-x[0])

ans = 0
cnt = 0
for v, t in A:
        if cnt==x+y: break
        if t==0:
                if x:
                        x -= 1
                        ans += v
        elif t==1:
                if y:
                        y -= 1
                        ans += v
        else:
                if x+y>cnt:
                        cnt += 1
                        ans += v
                else: break
print(ans)
