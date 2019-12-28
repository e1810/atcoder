n, a, b = map(int, input().split())
if((b-a)%2): print(min((a+b-1)//2, (n+n-a-b+1)//2))
else: print((b-a)//2)
