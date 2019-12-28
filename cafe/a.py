t, q, p = map(int, input().split())
xy = [list(map(int, input().split())) for i in range(p-q+1)]
xy.sort(key=lambda x:x[0])

cnt = 0
prev = xy[0][1]
for x, y in xy:
    if prev>0 and y<0: cnt+=1
    elif prev<0 and y>0: cnt+=1
    elif y==0: cnt+=1
    prev=y
print("YNeos"[cnt<t::2])
