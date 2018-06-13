n = int(input())
digitsList = []
while(n):
    digitsList.append(n%10)
    n = n//10
digitsList = list(set(digitsList))
digitsList = map(str,sorted(digitsList))
print("".join(digitsList))

