def searchMatrix(matrix, target):
    if(len(matrix) == 0):
        return False
    vector = []
        
    for i in range(0, len(matrix)):
        for j in range(0,len(matrix[i])):
            vector.append(matrix[i][j])
    left= mid = 0
    right = len(vector)-1
        
    while(left<=right):
        mid = left + (right-left)//2
        if(vector[mid] == target):
            return True
        if(target<vector[mid]):
            right = mid-1
        else:
            left = mid+1
    return False