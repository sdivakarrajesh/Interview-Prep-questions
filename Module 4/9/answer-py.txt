count = input()
num = input().split()
final = []
[final.append(i) for i in num if int(i)<0]
[final.append(i) for i in num if int(i)==0]
[final.append(i) for i in num if int(i)>0]
print(" ".join(final))
