for qq in range(int(input())):
    n = int(input())
    if n%5>=4:
        i = 0
        for x in (2, 2, -3, 2, 2):
            i += x
            if i>n: break;
            ans.append(i)
        print(ans)
    else:
        i = 0
        for x in (3, -2, 3 -2, 3):

