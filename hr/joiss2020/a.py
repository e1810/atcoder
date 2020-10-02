for q in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    
    x = sum(a)
    if x%3:
        print(":(")
        continue
    x //= 3

    joi = [0, 0, 0]
    pos = 0
    for i in range(n):
        joi[pos] += a[i]
        if joi[pos]==x:
            pos += 1
        elif joi[pos]>x:
            print(":(")
            break
    else:
        print("Yay!")
