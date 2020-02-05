
n, e, w, s = [0]*4
for i in input():
    if i=="N": n=1
    if i=="E": e=1
    if i=="W": w=1
    if i=="S": s=1
print("YNeos"[n!=s or e!=w::2])
