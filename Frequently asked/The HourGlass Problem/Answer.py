def hourglass(arr,i,j):
    sum = 0
    sum += arr[i][j] + arr[i][j+1] + arr[i][j+2]
    sum += arr[i+1][j+1]
    sum += arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2]
    return sum

arr = []
for i in range(0,6):
    arr.append(list(map(int,input().strip().split())))
max =-10000000
for i in range(0,4):
    for j in range(0,4):
        if hourglass(arr,i,j) > max:
            max = hourglass(arr,i,j)
print(max)
           