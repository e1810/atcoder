x, y = map(int, input().split())
tx, ty = 0, 0
a = 1
b = 1
ans = 1
while 1:
    if (tx,ty) == (x,y): break

    b += a
    tx += b-1
    ans += 1
    #print(tx-a+1, tx, "  ", ty, ty+a-1)
    if tx-a+1<=x<=tx and ty<=y<=ty+a-1: break

    a += b
    ty += a-1
    ans += 1
    #print(tx-b+1, tx, "  ", ty-b+1, ty)
    if tx-b+1<=x<=tx and ty-b+1<=y<=ty: break

    b += a
    tx -= b-1
    ans += 1
    #print(tx, tx+a-1, "  ", ty+a+1, ty)
    if tx<=x<=tx+a-1 and ty-a+1<=y<=ty: break

    a += b
    ty -= a-1
    ans += 1
    #print(tx, tx+b-1, "  ", ty, ty+b-1)
    if tx<=x<=tx+b-1 and ty<=y<=ty+b-1: break
print(ans%3 if ans%3 else 3)
