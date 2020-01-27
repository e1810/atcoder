h, a, b = map(int, input().split())
print(sum([h%i==0 for i in range(a, b+1)]))
