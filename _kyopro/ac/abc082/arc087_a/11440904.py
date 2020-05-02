
#!/usr/bin/env python3
from collections import Counter
n, *a = map(int, open(0).read().split())
a = Counter(a).items()
ans = 0
for v,c in a:
	if v<=c: ans += c-v
	else: ans += c
print(ans)
