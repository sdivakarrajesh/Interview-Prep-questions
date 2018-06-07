def gcd(m,n):
    if(m<n):
        (m,n) = (n,m)
    while(m%n)!=0:
        (m,n) = (n,m%n)
    return n
n = int(input())
for i in range(0,n):
    n1,n2 = map(int,input().split())
    print(gcd(n1,n2))
