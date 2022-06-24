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

