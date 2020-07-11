a, b = [list(map(int,input().split())) for i in (0,0)]
print(sum([max(a[i],b[i]) for i in range(7)]))
