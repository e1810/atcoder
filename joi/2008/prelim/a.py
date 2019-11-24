n = 1000 - int(input())
mo = [500, 100, 50, 10, 5]
cn = [0]*5
for i in range(5): cn[i], n = divmod(n, mo[i])
print(sum(cn)+n)
