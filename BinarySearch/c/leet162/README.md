# Leetcode #162

A peak element is an element that is strictly greater than its neighbors.

Given an integer array `nums`, find a peak element, and return its index. If the array contains multiple peaks, return the index to *any of the peaks*.

You may imagine that `nums[-1] = nums[n] = -∞`.

You must write an algorithm that runs in `O(log n)` time.

## Implementation

This is a modification of template #2 for binary search. While you have to make modifications towards the approach, the general idea is quite similar. 

```
nums = [3,4,5,1,2]
```
In this array, you need to find the greatest value in the array. Since the array is rotated, it means that there's a sequence that is ascending in which you have to either look right or left for the maximum. 

```
[3,4,5,1,2]
 L   M   R
```
```
[3,4,5,1,2]
 L M R
```
```
[3,4,5,1,2]
     R
     L
```
Now that the right and left are equal, the search is over, and the left node gets returned.

If the pivot is less than its succeeding index, then you search the right hand side. If not, then you search the left hand side. 

This is done using these two conditionals: 
```
if(nums[pivot]<nums[pivot+1]) {
    left = pivot+1
}
else {
    right = pivot
}
```
The full function: 
```
int findPeakElement(int* nums, int numsSize){
    if(numsSize == 0){return -1;}
    if(numsSize == 1){return 0;}
    
    int left, right, pivot; 
    left = pivot = 0; 
    right = numsSize-1; 
    
    while(left<right) {
        pivot = left + (right-left)/2;
        if(nums[pivot]>nums[pivot+1]) {
            right = pivot;
        }
        else {
            left = pivot +1;
        }
        
    }
    return left;
}
```
