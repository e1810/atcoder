s, n, c = input(), int(input()), []
for i in s:
    for j in s: c.append(i+j)
print(sorted(c)[n-1])
