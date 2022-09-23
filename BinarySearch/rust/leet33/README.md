# Leetcode #33: Search in Rotated Sorted Array

### Problem
There is an integer array `nums` sorted in ascending order (with **distinct** values).

Prior to being passed to your function, `nums` is possibly **rotated** at an unknown pivot index `k` (`1 <= k < nums.length`) such that the resulting array is `[nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]]`(**0-indexed**). For example, `[0,1,2,4,5,6,7]` might be rotated at pivot index `3` and become `[4,5,6,7,0,1,2]`.

Given the array `nums` **after** the possible rotation and an integer `target`, return *the index* of `target` if it is in nums, or `-1` if it is not in `nums`.

You must write an algorithm with `O(log n)` runtime complexity.

**Example 1**
```
Input: nums = [4,5,6,7,0,1,2], target = 0 
Output: 4
```

**Example 2**
```
Input: nums = [4,5,6,7,0,1,2], target = 3 
Output: -1
```

**Example 3**
```
Input: nums = [1], target = 0 
Output: -1
```

## Implementation

Binary search cannot be conducted unless the array is sorted. While the array *was* sorted before, it has now been roated by an arbitrary number of indices. So how do we look for the target? While the array may or may not be roated, that doesn't mean its unsorted now. What it really means is that there are two sorted sections in the array with the exception of one number.

**Eg.)**
```
arr: [4,5,6,7,0,1,2]
      -------   ---
```
In this rotated array, there are two sections that are sorted. The only section that isn't is the 0, as that is where the rotation starts. What this means is that we can binary search the sorted partitions in the array. In order to to this, we first need to find where the partition is. In other words, we need to find the index of 0. If we can do this, we can then perform a normal binary search on the rest of the array. We can find the partition by using a modified version of binary search. 

```
left = 0
right = length-1

while left < right {
    pivot = left+(right-left)/2
    if(right < pivot){
        left = pivot+1
    }   
    else {
        right = pivot
    }
}
```

*Note: The reason why we set the right to the pivot and not pivot+1 is because this binary search does not have a conditional that deals with the pivot itself like most templates.*

Once the search ends, we can then assign the pivot to the left, as the left side of the search always defaults to the smallest value regardless of search space. Now, we can set left and right to their normal values. 

Now that we have the partition, we now need to find with side of the partition the target is. We can do this by using domains. 

eg.)
If its on the right, then 0<=target<=right.
If its not in this domain, then its on the left.


If its on the right, then you set the left to the pivot.
If its on the left, then you set the right to the pivot.

After you've done this, you can now perform a regular binary search like so: 
```
while left<=right {
    if nums[pivot] == target{
        return pivot
    }
    if target < nums[pivot] {
        right = pivot-1
    }
    else{
        left = pivot+1
    }
    return -1
}
```

