def mySqrt(x):
    L = pivot = 1
    R = x

    while(L<=R):
        pivot = L+(R-L)//2
        if((x//pivot) == pivot):
            return pivot
        elif((x//pivot)<pivot):
            R = pivot - 1
        else:
            L = pivot+1
    return R