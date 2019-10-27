
n = int(input())
l = int(n**0.5)
while l:
    if n%l: l-=1
    else: break
print((l-1)+(n//l-1))
