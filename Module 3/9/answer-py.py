from math import sqrt
start,end = map(int,input().split())
def isPrime(n):
    for i in range(2,int(sqrt(n))):
        i = int(i)
        if n%i== 0:
            return False
    return True


def isCircular(n):
    length = len(n)
    for i in range(0,length):
        n = n[1:] + n[0]
        if isPrime(int(n)):
            continue
        else:
            return False
    return True


if start<=2:
        print(2,end=" ")
        start= 3
for i in range(start,end+1):
    if isPrime(int(i)) and isCircular(str(i)):
        print(i,end=" ")
    else:
        continue
