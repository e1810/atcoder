
from itertools import permutations

pas = [[0]*4 for i in range(4)]
for i in range(3):
        a, b = map(int, input().split())
        pas[a-1][b-1] = pas[b-1][a-1] = 1

ans = "NO"
for x in permutations(range(4)):
        cant = False
        for i in range(3):
                if pas[x[i]][x[i+1]]==0: cant = True
        if cant==False: ans = "YES"
print(ans)
