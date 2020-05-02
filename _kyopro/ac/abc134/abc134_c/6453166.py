
a = [int(input()) for i in range(int(input()))]
a_s = sorted(a)[::-1]
mx, submx = a_s[0], a_s[1]
cnt = a.count(mx)
for n in a:
    if n!=mx: print(mx)
    elif cnt>1: print(mx)
    else: print(submx)
