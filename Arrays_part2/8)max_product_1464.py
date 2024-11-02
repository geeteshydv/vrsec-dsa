def maxProduct(nums):
    n = len(nums)
    first = -1
    second = -1
    
    # Iterate through the list to find the two largest numbers
    for i in range(n):
        if nums[i] > first:
            second = first
            first = nums[i]
        elif nums[i] > second:
            second = nums[i]

    # Return the product of the two largest numbers minus 1
    return (first - 1) * (second - 1)
