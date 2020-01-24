n = int(input());print(*list(zip(*sorted([[i+1,b]for i,b in enumerate(map(int,input().split()))],key=lambda x:x[1])))[0])

