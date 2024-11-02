https://www.geeksforgeeks.org/problems/merge-two-sorted-arrays-1587115620/1

Code-:
def merge(arr1, arr2, n, m):
    low = 0    # Pointer for arr2
    high = n - 1  # Pointer for arr1

    # Swap elements if needed to ensure arr1 contains smaller elements than arr2
    while low < m and high >= 0:
        if arr2[low] < arr1[high]:
            # Swap arr1[high] and arr2[low]
            arr1[high], arr2[low] = arr2[low], arr1[high]
            low += 1
            high -= 1
        else:
            break

    # Sort both arrays again
    arr1.sort()
    arr2.sort()
