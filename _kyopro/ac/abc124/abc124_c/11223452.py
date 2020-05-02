
s=input();z=sum([int(s[i])==i%2 for i in range(len(s))]);print(min(z,len(s)-z))
