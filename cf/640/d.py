for qq in range(int(input())):
    n = int(input())
    A = list(map(int, input().split()))
    a, b = 0, n-1
    ans = asum = bsum = 0
    prev = 0
    turn = 0
    while a<=b:
        ans += 1
        cnt = 0
        if turn==0:
            while prev>=cnt and a<=b:
                asum += A[a]
                cnt += A[a]
                a += 1
            prev = cnt
        else:
            while prev>=cnt and a<=b:
                bsum += A[b]
                cnt += A[b]
                b -= 1
            prev = cnt
        turn ^= 1
    print(ans, asum, bsum)
