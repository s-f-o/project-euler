x=1
i=1
while i < 1000000000000000:
    i+=1
    x += sum(map(int,str(x)))
print x
