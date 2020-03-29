a,b=map(int,input().split());print(sum([str(i)==str(i)[::-1]for i in range(a,b+1)]))
