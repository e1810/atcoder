
from itertools import accumulate
n, q = map(int, input().split())
s = input()
*a, = accumulate([0,0]+[s[i-1:i+1]=="AC"for i in range(1,n)])
for i in range(q):
    l, r = map(int, input().split())
    print(a[r] - a[l])
