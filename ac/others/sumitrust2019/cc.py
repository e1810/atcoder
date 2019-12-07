def re(y, m, sm):
    if sm==m: return y
    elif y==0: return -1
    else: return max([re(y-1, m, sm+100+i) for i in range(6)])

x = int(input())

ans = 0
while 1:
    x, m = divmod(x, 100)
    if x<1:
        print(0)
        exit()
    y = x%10

    ret = re(y, y*100+m, 0)
    x -= y-ret
    if(x==0): break
    if ret<0:
        print(0)
        exit()
print(1)
