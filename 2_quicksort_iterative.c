#include <stdio.h>

// Helper function to partition the array
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return i + 1;
}

// Iterative quicksort using an explicit stack
void quicksort_iterative(int arr[], int low, int high) {
    // Create a stack
    int stack[100];
    int top = -1;

    // Push initial values
    stack[++top] = low;
    stack[++top] = high;

    // Process stack
    while (top >= 0) {
        high = stack[top--];
        low = stack[top--];

        int pi = partition(arr, low, high);

        // Push left subarray
        if (low < pi - 1) {
            stack[++top] = low;
            stack[++top] = pi - 1;
        }

        // Push right subarray
        if (pi + 1 < high) {
            stack[++top] = pi + 1;
            stack[++top] = high;
        }
    }
}

// Print array
void print_array(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90, 88, 45, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("=== Quicksort without Recursion (Iterative) ===\n");
    printf("Original array: ");
    print_array(arr, n);

    quicksort_iterative(arr, 0, n - 1);

    printf("Sorted array: ");
    print_array(arr, n);

    return 0;
}
