n = int(input())
for i in range(0,n):
    n1,n2 = input().split()
    count=0
    for x in n1:
        if x==n2:
            count = count+1
    print(count)
