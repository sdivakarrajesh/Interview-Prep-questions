def check(str1, str2):
    letterDict = {}
    for i in str1:
        letterDict[i] = 1
    for i in str2:
        if i in letterDict:
            return True

str1 = input()
str2 = input()
ans = check(str1,str2)
if ans:
    print("YES")
else: 
    print("NO")

#simplest answer
#the smallest substring possible is a single letter
#if two strings have a particular letter -> YES