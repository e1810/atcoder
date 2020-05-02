for qq in range(int(input())):
    a, b, c = map(int, input().split())
    ans = ""
    if a: ans += "0" * (a+1)
    if c: ans += "1" * (c+1)
    tu = (c>0)
    i = (a>0 and c>0) - (a==0 and c==0)
    while i<b:
        tu ^= 1
        ans += "01"[tu]
        i += 1
    print(ans)
