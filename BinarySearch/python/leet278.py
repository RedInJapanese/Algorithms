 def firstBadVersion(n):
    L = pivot = 1
    R = n
    while(L<=R):
        pivot = L + (R-L)//2
        if(isBadVersion(pivot)):
            if(isBadVersion(pivot-1) == False):
                return pivot
            else: 
                R = pivot - 1
        else:
            L = pivot + 1