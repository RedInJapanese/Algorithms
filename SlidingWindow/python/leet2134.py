class Solution(object):
    def minSwaps(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        k = 0
        y = 0
        
        test = []
        while(y<2):
            k = 0
            for x in nums:
                if(x==1):
                    k+=1
                test.append(x)
            y+=1
        if(k == 0):
            return 0
            
        m = 100001
        i = 0
        j = 0
        num_zeros = 0; 
        
        while(j<len(test)):
            if(test[j] == 0):
                num_zeros+=1
            if(j-i+1 == k):
                m = min(m, num_zeros)
                if(test[i] == 0):
                    num_zeros-=1
                i+=1
            j+=1
        return m