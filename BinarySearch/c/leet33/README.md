# Leetcode Problem #33

## Question
There is an integer array nums sorted in ascending order (with **distinct** values).

Prior to being passed to your function, nums is possibly rotated at an unknown pivot index `k (1 <= k < nums.length)` such that the resulting array is `[nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]]`(**0-indexed**). For example, `[0,1,2,4,5,6,7]` might be rotated at pivot index `3` and become `[4,5,6,7,0,1,2]`.

Given the array `nums` **after** the possible rotation and an integer `target`, return the index of target if it is in `nums`, or `-1` if it is not in `nums`.

You must write an algorithm with `O(log n)` runtime complexity.


## Implementation

In order to do this problem, you need to use the binary search algorithm. However, the array is shifted by `k` indices, meaning that you will need to use a different version of binary search in order to solve it. 

First, you need to find the smallest value in the array. This will be your pivot. 
```
[-----------------0-------]
```
This is done by binary searching for said value until your search space is empty. 

#### Example
```
[4,5,6,7,0,1,2]
 L     M     R
```

In this case, you check if the right is less than the pivot. If it is, then you know you need to search on the right hand side of the array. If not, then you need to search on the left hand side. 
```
int L, R, pivot
L = pivot = 0
R = array length

while(L<R) {
    if(nums[pivot]>nums[R]) {
        L = pivot+1
    }
    else {
        R = pivot
    }
}
```

After this, you now have the lowest value in the array. You need to use this value in order to find if the target is on the left or right hand side of your pivot. 
```
if(target>=nums[pivot] and target <= nums[R]) {
    L= pivot
}
```

Now, you binary search the side of the array the target is on, which will give you the right index.
