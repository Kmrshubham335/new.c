import numpy as np

# get dimensions of the first matrix from the user
m1 = int(input("Enter the number of rows for the first matrix: "))
n1 = int(input("Enter the number of columns for the first matrix: "))

# create an empty matrix of m1xn1 dimension
matrix1 = []
for i in range(m1):
    row = []
    for j in range(n1):
        row.append(0)
    matrix1.append(row)

# get input for each element in the first matrix
for i in range(m1):
    for j in range(n1):
        matrix1[i][j] = int(input("Enter element at position ({},{}) for the first matrix: ".format(i+1, j+1)))

# get dimensions of the second matrix from the user
m2 = int(input("Enter the number of rows for the second matrix: "))
n2 = int(input("Enter the number of columns for the second matrix: "))

# create an empty matrix of m2xn2 dimension
matrix2 = []
for i in range(m2):
    row = []
    for j in range(n2):
        row.append(0)
    matrix2.append(row)

# get input for each element in the second matrix
for i in range(m2):
    for j in range(n2):
        matrix2[i][j] = int(input("Enter element at position ({},{}) for the second matrix: ".format(i+1, j+1)))

# convert the matrices to numpy arrays
arr1 = np.array(matrix1)
arr2 = np.array(matrix2)

# perform matrix multiplication using the dot() function of numpy
result = np.dot(arr1, arr2)

# display the result
print("Result of matrix multiplication:")
print(result)



