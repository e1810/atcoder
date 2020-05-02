
for i in range(int(input()), 1000):
  if i//100 == (i//10)%10 == i%10:
    print(i)
    break
