n,k = map(int,input().split())
arr = list(map(int,input().strip().split()))
dict = {}
for i in arr:
    if i in dict.keys():
        dict[i] = dict[i] + 1
    else:
        dict[i] = 1
listItems = [(k, v) for k, v in dict.items()]
listItems_sorted = sorted(listItems,key=lambda x:(x[0]))
listItems_sorted = [str(x[0]) for x in listItems_sorted if x[1]>(n/k)]
if len(listItems_sorted)==0:
    print("No such element")
else:
    print(",".join(listItems_sorted))