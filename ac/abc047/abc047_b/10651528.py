
w, h, n = map(int, input().split())

fie = [[1]*h for i in range(w)]

for i in range(n):
        x, y, a = map(int, input().split())
        if a==1:
                for j in range(x):
                        for k in range(h): fie[j][k] = 0
        if a==2:
                for j in range(x, w):
                        for k in range(h): fie[j][k] = 0
        if a==3:
                for j in range(w):
                        for k in range(y): fie[j][k] = 0
        if a==4:
                for j in range(w):
                        for k in range(y, h): fie[j][k] = 0
sm = 0
for i in range(w): sm += sum(fie[i])
print(sm)
