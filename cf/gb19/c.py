for i in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    l = r = 0
    for j in a:
        l += j
        r ^= j

    m = l^r

    if m: o = "1"+bin(m)[2:]
    else: o = "1"
    print(int(o, 2))
    print(3)
    print(m, m, int(o, 2))

"""
1 2
000011 + 
000011 ^

000000
000000
000001

000100
000010
"""
