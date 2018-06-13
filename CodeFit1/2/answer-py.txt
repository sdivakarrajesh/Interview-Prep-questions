n = int(input())
for i in range(0,n):
    n1,n2 = map(int,input().strip().split())
    arr1 =  list(map(int,input().strip().split()))
    arr2 = list(map(int,input().strip().split()))
    duplicates = [x for x in arr1 if x in arr1 and x in arr2]
    ans1 = [str(x) for x in arr1 if x not in duplicates]
    ans2 = [str(x) for x in arr2 if x not in duplicates]
    length = len(ans1+ans2)
    print("{"+",".join(ans1+ans2)+"} Total is",length)