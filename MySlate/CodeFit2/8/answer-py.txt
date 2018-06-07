rowCount,columnCount = input().split()
rowCount = int(rowCount)
columnCount = int(columnCount)
matrix = []
for i in range(rowCount):
    row = input().split()
    matrix.append(row)
transpose = [[matrix[j][i] for j in range(len(matrix))] for i in range(len(matrix[0]))]
for i in range(columnCount):
    print(" ".join(transpose[i]))