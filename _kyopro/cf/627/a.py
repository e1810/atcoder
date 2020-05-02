for qq in range(int(input())):
	n = int(input())
	a = list(map(lambda x:int(x)%2, input().split()))
	print("YNEOS"[len(set(a))==2::2])
	
