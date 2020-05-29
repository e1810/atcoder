x, y, z = map(int, input().split())
n = z
while 1:
    if n%17==x and n%107==y:
        print(n)
        break
    else:
        n += 1000000007
