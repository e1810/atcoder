primes = []
x = 2
while len(primes)<10001:
	ok = True
	for i in primes:
		if x%i==0: ok = False
	if ok:
		primes.append(x)
	x += 1
print(primes[-1])

