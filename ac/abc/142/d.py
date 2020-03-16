def prefactor(x):
  ret = set()
  for i in range(2, int(x**0.5)+1):
    if x%i==0: ret.add(i)
    while x%i==0: x //= i
  if x>1: ret.add(x)
  return ret
    

a, b = map(int, input().split())
print(1+len(prefactor(a) & prefactor(b)))
