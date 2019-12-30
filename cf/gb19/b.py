for i in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    for j in range(n-1):
        if abs(a[j]-a[j+1])>=2:
            print("YES")
            print(j+1, j+2)
            break
    else: print("NO")

