option,num_string = input().split()
odds = [x for x in num_string if int(x)%2==1]
evens = [x for x in num_string if int(x)%2==0]
if int(option)==0:
    print("".join(odds+evens))
else:
    print("".join(evens+odds))