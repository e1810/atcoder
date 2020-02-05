x, mx = int(input()), 1
for i in range(2,x+1):
    for j in range(2,100):
        if i**j<=x: mx=max(mx, i**j)
print(mx)
