def quicksort_iterative(arr):
    """Iterative quicksort implementation using an explicit stack"""
    # Create a copy to avoid modifying the original
    arr = arr.copy()
    
    # Stack to store subarray boundaries
    stack = [(0, len(arr) - 1)]

    while stack:
        low, high = stack.pop()

        if low < high:
            # Partition
            pivot = arr[high]
            i = low - 1

            for j in range(low, high):
                if arr[j] < pivot:
                    i += 1
                    arr[i], arr[j] = arr[j], arr[i]

            arr[i + 1], arr[high] = arr[high], arr[i + 1]
            pi = i + 1

            # Push left and right subarrays to stack
            stack.append((low, pi - 1))
            stack.append((pi + 1, high))

    return arr

# Test the iterative implementation
arr = [64, 34, 25, 12, 22, 11, 90, 88, 45, 50]

print("=== Quicksort without Recursion (Iterative) ===")
print(f"Original array: {arr}")

sorted_arr = quicksort_iterative(arr)

print(f"Sorted array: {sorted_arr}")
