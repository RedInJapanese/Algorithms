# Leetcode #34
Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given `target` value.

If `target` is not found in the array, return `[-1, -1]`.

You must write an algorithm with `O(log n)` runtime complexity.

## How to Solve
This section will be going over the logic of how to solve the problem along with the practical solution

### Logic
In this scenario, the problem is asking us for two targets instead of one. In every case, the array will be sorted and the duplicates will be contiguous. The problem is asking for the first and last position in the array. Given these constraints, we have to find the leftmost target and the right most target. This requires us to perform binary search twice on the array. Once for the leftmost point, and once for the rightmost point. 

```
[5,7,7,8,8,10]
 L     M    R

[5,7,7,8,8,10]
 L   M R

[5,7,7,8,8,10]
     L R
       M
```

In this scenario, the search prioritizes going to the left side. This is done by changing the conditional that checks if the right should change its position. 
```
if(target<=nums[pivot]){
    right = pivot-1
}
```
If we want to prioritize searching the right hand side of the array, then we need to change the conditional to this: 
```
if(target>=nums[pivot]){
    left = pivot+1
}
```
This will take the previously shown example, but search with respect to the right. 

### Code
We first need to search for the leftmost target, then the rightmost. This can be done using two different binary searches; one being for the left side, the other being for the right. 

```
leftSearch(nums[], target) {
    int left, right, pivot 
    left = 0
    right = lenght(nums)-1
    index = -1


    while(left<=right){
        pivot = left + (right-left)/2
        if(nums[pivot] == target){
            index = pivot 
            return
        }       
        if(nums[pivot]>=target){
            right = pivot-1
        }
        else {
            left = pivot+1
        }
    }
}
```

Function for the right hand search: 
```
rightSearch(nums[], target){
    int left, right, pivot 
    left = 0
    right = lenght(nums)-1
    index = -1


    while(left<=right){
        pivot = left + (right-left)/2
        if(nums[pivot] == target){
            index = pivot 
            return
        }       
        if(nums[pivot]<=target){
            left = pivot+1
        }
        else {
            right = pivot-1
        }
    } 
}
```
