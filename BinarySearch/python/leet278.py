 def firstBadVersion(n):
    L = pivot = 0
    R = n
    while(L<=R):
        pivot = L + (R-L)//2
        if(isBadVersion(pivot)):
            if(isBadVersion(pivot-1)):
                return pivot
            else: 
                R = pivot - 1
        else:
            L = pivot + 1