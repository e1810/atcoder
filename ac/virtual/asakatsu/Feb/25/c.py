k, a, b = map(int, input().split())
print(max(k+1, (k-a+1)//2*(b-a)+a+(k-a+1)%2))
