
beki = [0] * 1010
beki[1] = 1
for i in range(2, 1001):
        t = i*i
        while t<1001:
                beki[t] = 1
                t *= i
ans = 1
for i in range(int(input())+1):
        if beki[i]: ans = i
print(ans)
