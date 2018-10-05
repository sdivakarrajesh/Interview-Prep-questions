import re
testCases = int(input())
pattern = r'(\+|-){0,1}[0-9]*[.][0-9]+$'
for i in range(testCases):
    case = input()
    print(bool(re.match(pattern,case)))