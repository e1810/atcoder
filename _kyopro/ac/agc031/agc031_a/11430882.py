
#!/usr/bin/env python3
from collections import Counter
n = int(input())
a = Counter(input())
ans = 1
for v,c in a.items(): ans = ans * (1+c)%1000000007
print(ans-1)
