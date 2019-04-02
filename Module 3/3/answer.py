num = input()
rev = num[::-1]
num = int("".join(num))
rev = int("".join(rev))
rev_square = str(rev*rev)
rev_rev_square = rev_square[::-1]
rev_rev_square = int("".join(rev_rev_square))
if num*num == rev_rev_square:
    print("ADAM")
else:
    print("NOT ADAM")
