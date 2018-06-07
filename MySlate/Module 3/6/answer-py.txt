import datetime
dd,mm,yy= input().split("/")
if int(dd)<32 and int(dd)>0 and int(mm)<13 and int(mm)>0 and int(yy)>1970:
    day = datetime.datetime.strptime(dd+mm+yy,"%d%m%Y").strftime('%A')
    print(day)
else:
    print("Invalid Date")