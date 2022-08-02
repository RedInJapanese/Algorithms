class Solution(object):
    def getAverages(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: List[int]
        """
        avg = []
        start = False
        
        i = 0
        total = 0
        while(i<len(nums)):
            if(i-k<0 or i+k>=len(nums)):
                avg.append(-1)
            else:
                if(start == False):
                    for x in range(i-k, i+k+1): 
                        total+=nums[x]
                    start = True
                else:
                    total+=nums[i+k]
                    total-=nums[i-k-1]
                avg.append(total//(2*k+1))
            i+=1
        return avg