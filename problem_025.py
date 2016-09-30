a=1
b=1
c=a+b

i=3
while len(str(c)) < 1000:
    i+=1
    a=b
    b=c
    c=a+b
print i
