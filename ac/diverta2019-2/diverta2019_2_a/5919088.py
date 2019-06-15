
n, k = map(int, input().split())
if k == 1:
    print(0)
    exit()
elif n<k:
    print(1)
    exit()
print(n-k)
