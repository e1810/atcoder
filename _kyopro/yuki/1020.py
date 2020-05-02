n, k = map(int, input().split())
x = k-1
s = input()
t = s[x:] + s[:x]
if (n-k)%2==0: t = t[:-k+1] + t[-k+1:][::-1]
print(t)

