# Get dimensions of the matrix from user
m = int(input("Enter the number of rows: "))
n = int(input("Enter the number of columns: "))

# Create an empty matrix of m x n dimension
matrix = []
for i in range(m):
    row = []
    for j in range(n):
        row.append(0)
    matrix.append(row)

# Get input for each element in the matrix
for i in range(m):
    for j in range(n):
        matrix[i][j] = int(input("Enter element at position ({},{}) of the matrix: ".format(i+1, j+1)))

# Print upper triangle elements
print("Upper triangle elements of the matrix:")
for i in range(m):
    for j in range(n):
        if j >= i:
            print(matrix[i][j], end=" ")
        else:
            print(" ", end=" ")
    print()
