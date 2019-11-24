n = int(input())
lrs = sorted([list(map(int, input().split())) for i in range(n)])
lrlr = [0, -1e10, 0, -1e10]
for l,r in lrs:
    LRLR = [max(lrlr[0],l), min(abs(lrlr[1]),r), max(lrlr[2],l), min(abs(lrlr[3]),r)]
    p1 = LRLR[1]-LRLR[0]+1 + lrlr[3]-lrlr[2]+1
    p2 = lrlr[1]-lrlr[0]+1 + LRLR[3]-LRLR[2]+1
    if p1>p2:
        lrlr[0] = LRLR[0]
        lrlr[1] = LRLR[1]
    else:
        lrlr[2] = LRLR[2]
        lrlr[3] = LRLR[3]
    print(lrlr)
print(lrlr[1]-lrlr[0]+lrlr[3]-lrlr[2]+2)
