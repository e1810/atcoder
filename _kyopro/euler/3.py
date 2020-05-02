n = int(input())
prime_factors = []

for i in range(2,int(n**0.5)+1):
    if n%i==0:
        prime_factors.append(i)
        while n%i==0: n//=i
if n!=1: prime_factors.append(n)
print(prime_factors)
