from itertools import permutations
from math import factorial

n = int(input())
xy = [list(map(int, input().split())) for i in range(n)]

ave = 0
jun = permutations(range(n))
for j in jun:
    #print(j)
    sm = 0
    for i in range(n-1):
        x, y = xy[j[i]]
        nx, ny = xy[j[i+1]]
        #print(x, y, nx, ny)
        sm += ((x-nx)**2 + (y-ny)**2)**0.5 
    ave += sm
print(ave/factorial(n))
