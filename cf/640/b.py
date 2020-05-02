for qq in range(int(input())):
    n, k = map(int, input().split())
    if n%2:
        if k%2:
            if n<k: print("NO")
            else:
                print("YES")
                ans = [1] * (k-1)
                ans.append(n-k+1)
                print(*ans)
        else: print("NO")
    else:
        if k%2==0:
            if n>=k:
                print("YES")
                ans = [1] * (k-1)
                ans.append(n-k+1)
                print(*ans)
                continue
        if n<2*k: print("NO")
        else:
            print("YES")
            ans = [2] * (k-1)
            ans.append(n-2*(k-1))
            print(*ans)

