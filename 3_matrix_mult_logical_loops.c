#include <stdio.h>

#define ROWS_A 3
#define COLS_A 2
#define ROWS_B 2
#define COLS_B 3

// Print matrix
void print_matrix(int *matrix, int rows, int cols) {
    int i = 0;
    while (i < rows) {
        int j = 0;
        while (j < cols) {
            printf("%d ", *(matrix + i * cols + j));
            j++;
        }
        printf("\n");
        i++;
    }
}

// Matrix multiplication using logical loops (while)
void multiply_matrices_logical(int A[ROWS_A][COLS_A], 
                               int B[ROWS_B][COLS_B],
                               int result[ROWS_A][COLS_B]) {
    int i = 0;
    while (i < ROWS_A) {
        int j = 0;
        while (j < COLS_B) {
            result[i][j] = 0;
            int k = 0;
            while (k < COLS_A) {
                result[i][j] += A[i][k] * B[k][j];
                k++;
            }
            j++;
        }
        i++;
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

    printf("=== Matrix Multiplication with Logical Loops (while) ===\n");
    printf("Matrix A (%d x %d):\n", ROWS_A, COLS_A);
    print_matrix((int *)A, ROWS_A, COLS_A);

    printf("\nMatrix B (%d x %d):\n", ROWS_B, COLS_B);
    print_matrix((int *)B, ROWS_B, COLS_B);

    multiply_matrices_logical(A, B, result);

    printf("\nResult (A * B) (%d x %d):\n", ROWS_A, COLS_B);
    print_matrix((int *)result, ROWS_A, COLS_B);

    return 0;
}
