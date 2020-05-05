a, b, k, l = map(int, input().split())
print(min(a*k, (k+l-1)//l*b, k//l*b+k%l*a))
