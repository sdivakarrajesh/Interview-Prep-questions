from datetime import datetime
time1,time2  = input().split(" ")
time1 = datetime.strptime(time1,'%H:%M:%S')
time2 = datetime.strptime(time2,'%H:%M:%S')
if time1>time2:
    tdelta = time1-time2
elif time2>time1:
    tdelta = time2 - time1
else:
    tdelta = "00:00:00"
tdelta = tdelta.__str__()
hh,mm,ss = tdelta.split(":")
if int(hh)==0:
    print(hh.rjust(2,"0")+":"+mm.rjust(2,"0")+":"+ss.rjust(2,"0"))
else:print(tdelta)