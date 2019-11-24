from math import factorial as fac
x, y = map(int, input().split())

if (x+y)%3:
    print(0)
    exit()

yt, yo = divmod(y, 2)
while yt>=0:
    if(yt+yo)*2==x: break
    yt -= 1
    yo += 2

n = 1
for i in range(yt+yo):
    n *= i+1
    if i==yt: xx=n
    if i==yo: yy=n

print(fac(n)/(fac(xx)*fac(yy)))
