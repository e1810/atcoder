
n, m = map(int, input().split())
k, s = [], []
for i in range(m):
        tmp = list(map(int, input().split()))
        k.append(tmp.pop(0))
        s.append(tmp)
p = list(map(int, input().split()))
ans = 0

for bn in range(2**n):
        bn = str(bin(bn))[2:].zfill(n)
        bright = 0
        for i in range(m):
                p_exp = 0
                for j in range(n):
                        #print("switch num",j, "bn", bn) 
                        if (j+1 in s[i]) and (bn[j] == '1'): p_exp += 1
                if p_exp%2 == p[i]: bright += 1
                #print("on botton", p_exp)
        #print("bright light", bright)
        if bright == m: ans += 1
print(ans)
