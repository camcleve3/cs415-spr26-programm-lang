def print_matrix(matrix):
    """Print a matrix"""
    for row in matrix:
        print(" ".join(str(x) for x in row))

def multiply_matrices_counting(A, B):
    """Matrix multiplication using counting loops (for)"""
    rows_A = len(A)
    cols_A = len(A[0])
    rows_B = len(B)
    cols_B = len(B[0])

    # Create result matrix with zeros
    result = [[0 for _ in range(cols_B)] for _ in range(rows_A)]

    # Multiply using for loops
    for i in range(rows_A):
        for j in range(cols_B):
            for k in range(cols_A):
                result[i][j] += A[i][k] * B[k][j]

    return result

# Test the counting loop implementation
A = [
    [1, 2],
    [3, 4],
    [5, 6]
]

B = [
    [7, 8, 9],
    [10, 11, 12]
]

print("=== Matrix Multiplication with Counting Loops (for) ===")
print("Matrix A (3 x 2):")
print_matrix(A)

print("\nMatrix B (2 x 3):")
print_matrix(B)

result = multiply_matrices_counting(A, B)

print("\nResult (A * B) (3 x 3):")
print_matrix(result)
