
from collections import Counter
n,*a=map(int,open(0).read().split())
print(sum([j for i,j in Counter(a).items()])-len(set(a)))
