x, y = map(int, input().split())
ng = True
for i in range(x+1):
    if i*2+(x-i)*4==y:
        ng = False
print("YNeos"[ng::2])
