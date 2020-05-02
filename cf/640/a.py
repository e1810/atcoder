for qq in range(int(input())):
    n = int(input())
    ans = []
    dig = 1
    while n:
        if n%10: ans.append(n%10 * dig)
        n //= 10
        dig *= 10
    print(len(ans))
    print(*ans)
