n = int(input())
cnt = [0] * (n*n+1000)
for a in range(1, int(n**0.5)+1):
    for b in range(1, int(n**0.5)+1):
        for c in range(1, int(n**0.5)+1):
            cnt[a*a + b*b + c*c + a*b + b*c + c*a] += 1

for i in range(1, n+1):
    print(cnt[i])
