
n = int(input())

xyh = [list(map(int,input().split()))for i in range(n)]
i = 0
while i<n:
    if xyh[i][2]==0:
        xyh.pop(i)
        n -= 1
    else: i += 1

if(n==1):
    print(*xyh[0])
    exit()

for i in range(101):
    for j in range(101):
        base = xyh[0][2]+abs(xyh[0][0]-i)+abs(xyh[0][1]-j)
        for k in range(1, n):
            if base!=xyh[k][2]+abs(xyh[k][0]-i)+abs(xyh[k][1]-j): break
        else:
            print(i, j, base)
            exit()
