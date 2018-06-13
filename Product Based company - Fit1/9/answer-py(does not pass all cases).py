def rotate(numList):
    return numList[1:] + [numList[0]]
num1 = int(input())
num2 = int(input())
digitList1 = []
digitList2 = []
while(num1):
    digitList1.append(num1%10)
    num1=num1//10
while(num2):
    digitList2.append(num2%10)
    num2=num2//10
digitList1 = digitList1[::-1]
digitList2 = digitList2[::-1]
yes = 0
for x in range(len(digitList1)):
    digitList1 = rotate(digitList1)
    if digitList2 == digitList1:
        print("YES")
        yes = 1
if yes==0:
    print("NO")