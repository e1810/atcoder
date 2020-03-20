
m=[0]*5
for i in range(int(input())):
        try: m["MARCH".index(input()[0])]+=1
        except: continue
ans = 0
for i in range(5):
        for j in range(i+1,5):
                for k in range(j+1, 5):
                        ans += m[i]*m[j]*m[k]
print(ans)
