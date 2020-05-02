
n = int(input())
a = [int(input()) for i in range(n)]
prev = a[0]
for i in range(1, n):
    if prev > a[i]: print("down", prev-a[i])
    elif prev==a[i]: print("stay")
    else: print("up", a[i]-prev)
    prev = a[i]
