def numRescueBoats(self, people, limit):
    """
    :type people: List[int]
    :type limit: int
    :rtype: int
    """
    people.sort()
    i = 0
    j = len(people)-1
    result = 0 
    while(i<j): 
        if(people[i]+people[j]<=limit):
            result+=1
            i+=1
            j-=1
        elif(people[i]>people[j]):
            result+=1
            i+=1
        else:
            result+=1
            j-=1
    if(i == j):
        result+=1
    return result