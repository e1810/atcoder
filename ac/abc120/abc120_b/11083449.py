
a, b, k = map(int, input().split())
for i in range(100, -1, -1):
        if a%i==0 and b%i==0: k -= 1
        if k==0:
                print(i)
                break
