n, m = map(int, input().split())
s = input()[::-1]

here = 0
ans = []

while here!=n:
    j = m
    if(here+j>n): j=n-here;
    while s[here+j]!="0":
        j -= 1
        if j<1:
            print(-1)
            exit()
    ans.append(j)
    here += j
print(*ans[::-1])
