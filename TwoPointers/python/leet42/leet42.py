def trap(self, height):
    """
    :type height: List[int]
    :rtype: int
    """
    i = 0
    j = len(height)-1
    L = 0
    R = 0
    ans = 0
    while(i<j):
        if(height[i]<height[j]):
            if(height[i]>=L):
                L = height[i]
            else:
                ans+=(L-height[i])
            i+=1
        else:
            if(height[j]>=R):
                R = height[j]
            else:
                ans+=R-height[j]
            j-=1
    return ans