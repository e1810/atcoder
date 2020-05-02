for qq in range(int(input())):
    a, b, c = map(int, input().split())
    ans = ""
    if a==b==c==0: ans = ""
    elif a==b==0: ans = "1" * (c+1)
    elif b==c==0: ans = "0" * (a+1)
    elif c==a==0: ans = "0" * (b==1) + "10" * (b//2) + "1" * (b%2)
    elif a==0: ans = "0" * (b%2) + "10" * (b//2) + "1" * (c+1)
    elif c==0: ans = "0" * (a+1) + "10" * (b//2) + "1" * (b%2)
    else: ans = "0" * (a+1) + "10" * (b//2) + "1" * (c+1)
    print(ans)
