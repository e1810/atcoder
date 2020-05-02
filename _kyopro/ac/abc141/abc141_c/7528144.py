
n, k, q = map(int, input().split())
p = [-q+k]*n
for i in range(q): p[int(input())-1]+=1
for i in p:
    if i>0: print("Yes")
    else: print("No")
