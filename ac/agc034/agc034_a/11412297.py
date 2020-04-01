
n, a, b, c, d = map(int, input().split())
s = list(input())

cant = False
if c>d:
        cant = True
        for i in range(max(0,b-2), min(d-1, n-2)):
                if s[i]==s[i+1]==s[i+2]=='.': cant = False

for i in range(b-1, d-1):
        if s[i]==s[i+1]=='#': cant = True
for i in range(a-1, c-1):
        if s[i]==s[i+1]=='#': cant = True

print("YNeos"[cant::2])
