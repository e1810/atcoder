n = int(input())
xy = [list(map(int, input().split())) for i in range(n)]

ng = True
for i in range(n):
    for j in range(i+1, n):
        for k in range(j+1, n):
            x1, y1 = xy[j][0]-xy[i][0], xy[j][1]-xy[i][1]
            x2, y2 = xy[k][0]-xy[i][0], xy[k][1]-xy[i][1]
            if x1*y2==x2*y1: ng = False
print("YNeos"[ng::2])
