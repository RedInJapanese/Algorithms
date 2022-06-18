def search(nums, target):
    L, R, pivot
    L = 0
    R = len(nums)-1
    if(len(nums) == 1 and nums[0] == target):
        return 0
    if(len(nums) == 2 and nums[0] == target):
        return 0
    if(len(nums) == 2 and nums[1] == target):
        return 1
    while(L<=R):
        pivot = L+(R-L)//2
        if(nums[pivot] == target):
            return pivot
        if(target<nums[pivot]):
            R= pivot-1
        else:
            L = pivot + 1
    return -1
    