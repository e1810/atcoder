x, n, *p = map(int, open(0).read().split())
ex = [0] * 102
for i in p: ex[i] = 1
ans = 0
for i in range(102):
    if ex[i]==0 and abs(x-i)<abs(x-ans):
        ans = i
print(ans)
