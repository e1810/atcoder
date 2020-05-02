def fact(a):
    ret = 1
    while a:
        ret *= a
        a -= 1
    return ret

n = int(input())
print(fact(n)*max(0,(9-n+2)))
