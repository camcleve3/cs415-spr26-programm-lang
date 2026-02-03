def print_matrix(matrix):
    """Print a matrix"""
    i = 0
    while i < len(matrix):
        j = 0
        while j < len(matrix[i]):
            print(matrix[i][j], end=" ")
            j += 1
        print()
        i += 1

def multiply_matrices_logical(A, B):
    """Matrix multiplication using logical loops (while)"""
    rows_A = len(A)
    cols_A = len(A[0])
    rows_B = len(B)
    cols_B = len(B[0])

    # Create result matrix with zeros
    result = [[0 for _ in range(cols_B)] for _ in range(rows_A)]

    # Multiply using while loops
    i = 0
    while i < rows_A:
        j = 0
        while j < cols_B:
            k = 0
            while k < cols_A:
                result[i][j] += A[i][k] * B[k][j]
                k += 1
            j += 1
        i += 1

    return result

# Test the logical loop implementation
A = [
    [1, 2],
    [3, 4],
    [5, 6]
]

B = [
    [7, 8, 9],
    [10, 11, 12]
]

print("=== Matrix Multiplication with Logical Loops (while) ===")
print("Matrix A (3 x 2):")
print_matrix(A)

print("\nMatrix B (2 x 3):")
print_matrix(B)

result = multiply_matrices_logical(A, B)

print("\nResult (A * B) (3 x 3):")
print_matrix(result)
