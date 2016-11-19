def countDivisors(x):
    n=0
    for i in range(1,x+1):
        if x%i == 0:
            n += 1
    return n

x = 0
i = 0
while True:
    if countDivisors((x*(x+1))/2) >= 500:
        break
    x+=1

print (x*(x+1))/2
