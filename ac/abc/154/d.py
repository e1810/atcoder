fact = [0]*1010
for i in range(1, 1010): fact[i] = fact[i-1]+i

n, k, *a = map(int, open(0).read().split())
a = list(map(lambda x:fact[x]/x, a))
ans = tmp = sum(a[:k])
for i in range(n-k):
    tmp -= a[i]
    tmp += a[i+k]
    ans = max(ans, tmp)
print(ans)
