n, m = map(int, input().split())
lone = [0]*n
ln = [0]*n
for i in range(m):
    a, b = map(int, input().split())
    if a==1: lone[b-1] = 1
    if b==1: lone[a-1] = 1
    if a==n: ln[b-1] = 1
    if b==n: ln[a-1] = 1
cant = True
for i in range(n):
    if lone[i] and ln[i]: cant = False
if cant: print("IMPOSSIBLE")
else: print("POSSIBLE")
