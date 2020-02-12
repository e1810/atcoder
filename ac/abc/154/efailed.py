n, k = input(), int(input())
z = [len(str(i))-str(i).count('0')==k for i in range(1000)]
for i in range(999): z[i+1] += z[i]

t = [0] + [9*(n[i-1]!='0') for i in range(1, len(n))]

def reter(r, p, sm):
    if r==0: return z[sm]
    ret = 0
    for i in range(p+1, len(n)-r+1):
        ret += reter(r-1, i, sm*10+max(t[i]*(i!=k-r), int(n[i])))
    return ret

print(reter(k, -1, 0))


