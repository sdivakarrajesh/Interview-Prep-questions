noOfBottles = int(input())
test = 1
count = 0
if noOfBottles == 1:
    count = 0
else:
    while test <= noOfBottles:
        test = test * 2
        count = count + 1
print("For", count,
      "rats upon feeding them based on the binary rep-1 of the bottle number, enter 1 if the rat died and 0 if not")
combination = input()
dec = sum(
    int(digit) * (2 ** position) for position, digit in enumerate(combination[::-1]))  # binary to decimal conversion
bottleNum = dec + 1
if bottleNum > noOfBottles or bottleNum == 0:
    print("invalid combination")
else:
    print(bottleNum)
