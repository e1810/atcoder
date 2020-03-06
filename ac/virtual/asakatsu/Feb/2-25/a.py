n, k, *a = map(int, open(0).read().split())

ans = 0
for i in a: ans += 2 * min(i, k-i)
print(ans)
