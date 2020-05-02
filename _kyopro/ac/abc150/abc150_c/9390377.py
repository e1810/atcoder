
from itertools import permutations
n = int(input())
p, q = [list(map(int, input().split())) for i in [0,0]]
i = 1
ans = 0
for a in permutations(list(range(1, n+1)), n):
    if list(a) == p: ans += i
    if list(a) == q: ans -= i
    i += 1
print(abs(ans))
