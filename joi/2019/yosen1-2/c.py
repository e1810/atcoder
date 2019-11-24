n, m = map(int, input().split())
l = [0]*m
for i in map(int, input().split()): l[i-1] += 1
print(max(l))