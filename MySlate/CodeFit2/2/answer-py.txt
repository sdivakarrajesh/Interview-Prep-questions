str = list(input())
openingBraces = ["(", "{", "["]
closingBraces = [")", "}", "]"]
stack = []
formatted =1
stackSize = 0
for i in range(len(str)):
    if str[i] in openingBraces:
        stack.append(str[i])
        stackSize = stackSize+1
    if str[i] in closingBraces and len(stack)== 0:
        formatted =0
        break
    if str[i] in closingBraces:
        lastOpeningBracketIndex = openingBraces.index(stack[-1])
        currentClosingBracketIndex = closingBraces.index(str[i])
        if lastOpeningBracketIndex != currentClosingBracketIndex:
            formatted =0
            break
        else:
            stack.pop()
if formatted==1 and len(stack)==0:
    print("Balanced",stackSize)
else:
    print("Not Balanced")

