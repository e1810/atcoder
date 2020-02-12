n, s = int(input()), input()
t = s.count("(")-s.count(")")
if t: print("("*max(0,-t)+s+")"*(max(0,t)))
else: print(
