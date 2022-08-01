def minimumCardPickup(self, cards):
    """
    :type cards: List[int]
    :rtype: int
    """
    if(len(cards) == 1):
        return -1
    d = {}
    j = 0
    minimum = 100001
        
    for i in cards: 
        if i in d:                 
            minimum = min(minimum, j-d[i]+1)
        d[i] = j
        j+=1
    if(minimum == 100001):
        minimum = -1
    return minimum