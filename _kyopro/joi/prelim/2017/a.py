a, b, c, d, e = [int(input())for i in range(5)]
t = 0
b += (a<0)
while a!=b:
    if a<0: t+=c
    elif a==0: t+=d
    else: t+=e
    a+=1
print(t)
