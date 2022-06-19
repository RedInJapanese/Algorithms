def searchInsert(nums, target):
    L = pivot = 0
    R = len(nums)-1

    while(L<=R):
        pivot = L+(R-L)//2
        if(nums[pivot] == target):
            return pivot
        if(target<nums[pivot]):
            R= pivot-1
        else:
            L = pivot+1
    return L