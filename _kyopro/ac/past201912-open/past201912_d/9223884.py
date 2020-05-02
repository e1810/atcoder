
n = int(input())
a = [0] * n
for i in range(n): a[int(input())-1] += 1
frm, to = -1, -1
for i in range(n):
    if a[i]==0: frm=i+1
    elif a[i]==2: to=i+1
if(frm==-1 or to==-1): print("Correct")
else: print(to, frm)
