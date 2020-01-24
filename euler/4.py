mx = 0
for i in range(100, 1000):
    for j in range(100, 1000):
        s = str(i*j)
        t = s[:len(s)//2]
        u = s[-1:~-len(s)//2:-1]
        if t==u: mx = max(mx, i*j)
print(mx)
