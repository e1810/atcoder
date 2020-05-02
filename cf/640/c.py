for qq in range(int(input())):
    n, k = map(int, input().split())
    k += (k+n-2) // (n-1) - 1
    print(k)
