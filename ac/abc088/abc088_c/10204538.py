
c = [list(map(int, input().split())) for i in range(3)]

mx = 0
for i in range(3): mx = max(mx, max(c[i]))

flag = True
for i in range(mx+1):
    d1 = [c[0][0]-i, c[0][1]-i, c[0][2]-i]
    for j in range(mx+1):
        d2 = [c[1][0]-j, c[1][1]-j, c[1][2]-j]
        for k in range(mx+1):
            d3 = [c[2][0]-k, c[2][1]-k, c[2][2]-k]
            if d1==d2==d3: flag = False
print("YNeos"[flag::2])
