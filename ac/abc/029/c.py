def fun(n, abc):
    if n:
        for i in "abc": fun(n-1, abc+i)
    else: print(abc)
fun(int(input()), "")
