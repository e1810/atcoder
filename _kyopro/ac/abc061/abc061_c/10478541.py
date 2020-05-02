
n, k = map(int, input().split())
arr = [0] * int(1e5+10)

for i in range(n):
        a, b = map(int, input().split())
        arr[a-1] += b

for i in range(100001):
        k -= arr[i]
        if k<=0:
                print(i+1)
                break
