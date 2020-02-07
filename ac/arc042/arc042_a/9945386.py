
n, m, *a = map(int, open(0).read().split())

used = [0]*n
for i in a[::-1]:
    if used[i-1]==0:
        print(i)
        used[i-1] = 1
        
for i in range(n):
    if used[i]==0: print(i+1)
