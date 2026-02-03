#include <stdio.h>

#define ROWS_A 3
#define COLS_A 2
#define ROWS_B 2
#define COLS_B 3

// Print matrix
void print_matrix(int matrix[10][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Matrix multiplication using counting loops (for)
void multiply_matrices_counting(int A[ROWS_A][COLS_A], 
                                int B[ROWS_B][COLS_B],
                                int result[ROWS_A][COLS_B]) {
    for (int i = 0; i < ROWS_A; i++) {
        for (int j = 0; j < COLS_B; j++) {
            result[i][j] = 0;
            for (int k = 0; k < COLS_A; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int A[ROWS_A][COLS_A] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    int B[ROWS_B][COLS_B] = {
        {7, 8, 9},
        {10, 11, 12}
    };

    int result[ROWS_A][COLS_B];

    printf("=== Matrix Multiplication with Counting Loops (for) ===\n");
    printf("Matrix A (%d x %d):\n", ROWS_A, COLS_A);
    print_matrix(A, ROWS_A, COLS_A);

    printf("\nMatrix B (%d x %d):\n", ROWS_B, COLS_B);
    print_matrix(B, ROWS_B, COLS_B);

    multiply_matrices_counting(A, B, result);

    printf("\nResult (A * B) (%d x %d):\n", ROWS_A, COLS_B);
    print_matrix(result, ROWS_A, COLS_B);

    return 0;
}
