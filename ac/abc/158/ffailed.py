MOD = 998244353
def modpow(n, p):
	ret = 1
	while p:
		if p&1: ret = ret * n % MOD
		n = n * n % MOD
		p >>= 1
	return ret

n = int(input())
xd = sorted([list(map(int, input().split()))for i in range(n)], key=lambda x:x[0]) + [[1e10, 0]]

chains = []
indep = chain = mxwy = 0
for i in range(n):
	mxwy = max(mxwy, sum(xd[i]))
	if mxwy<=xd[i+1][0]:
		if chain:
			chains.append(chain+1)
			chain = 0
			mxwy = 0
		else: indep += 1
	else: chain += 1
print(indep, chains)

b = modpow(2, indep)
for i in chains: b = b * i % MOD
print(b)
