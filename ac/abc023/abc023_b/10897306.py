
n, s = int(input()), input()
t = "b"
for i in range(n//2+1):
        if s==t:
                ans = i
                break
        if i%3==0: t = "a"+t+"c"
        elif i%3==1: t = "c"+t+"a"
        else: t = "b"+t+"b"
else: ans = -1
print(ans)
