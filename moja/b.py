n = int(input())
a = str(n-1).count('0')
b = str(n).count('0')
c = str(n+1).count('0')
print(max(a, b, c))
