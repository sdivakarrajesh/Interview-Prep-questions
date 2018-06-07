from datetime import datetime
date1,date2 = input().split(" ")
a = datetime.strptime(date1, "%d/%m/%Y")
b = datetime.strptime(date2, "%d/%m/%Y")
delta = b - a
print(delta.days)