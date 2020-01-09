print(*list(zip(*sorted(sorted(map(lambda x:[x[0],int(x[1]),x[2]+1],[input().split()+[i]for i in range(int(input()))]),key=lambda x:-x[1]),key=lambda x:x[0])))[2])
