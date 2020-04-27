
n, k = map(int, input().split())
zero, half = 0, 0
for i in range(1, n+1):
    if i%k==0: zero += 1
    if i%k==k/2: half += 1
print(zero**3 + half**3)
