def quicksort_recursive(arr):
    """Recursive quicksort implementation"""
    if len(arr) <= 1:
        return arr

    pivot = arr[len(arr) // 2]
    left = [x for x in arr if x < pivot]
    middle = [x for x in arr if x == pivot]
    right = [x for x in arr if x > pivot]

    return quicksort_recursive(left) + middle + quicksort_recursive(right)

# Test the recursive implementation
arr = [64, 34, 25, 12, 22, 11, 90, 88, 45, 50]

print("=== Quicksort with Recursion ===")
print(f"Original array: {arr}")

sorted_arr = quicksort_recursive(arr)

print(f"Sorted array: {sorted_arr}")
