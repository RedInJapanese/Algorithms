def findMaxAverage(self, nums, k):
    """
    :type nums: List[int]
    :type k: int
    :rtype: float
    """
    i = 0
    j = 0 
    m = 0
    max = -10.0
    avg = 0.0
        
    while(j<len(nums)):
        if(j==(i+k)):
            if(max<avg/k):
                max = avg/k
            avg = 0.0
            i+=1
            j= i
        else:
            avg+=nums[j]
            j+=1
    if(j == (i+k)):
        if(max<avg/k):
            max = avg/k
    return max