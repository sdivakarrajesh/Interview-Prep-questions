num,operation = input().split()
odds = [x for x in num if int(x)%2==1]
evens = [x for x in num if int(x)%2==0]
if operation == '0':
    print("".join(evens+odds))
elif operation == '1':
    print("".join(odds+evens))
