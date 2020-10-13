x, y = zip(*[map(int,input().split())for i in [0]*4])
x = sorted(x)
y = sorted(y)
print((y[2]-y[0]) * (x[2]-x[0]))
