# Leetcode #27
Given an integer array `nums` and an integer `val`, remove all occurrences of `val` in `nums` **in-place**. The relative order of the elements may be changed.

Since it is impossible to change the length of the array in some languages, you must instead have the result be placed in the **first part** of the array `nums`. More formally, if there are `k` elements after removing the duplicates, then the first `k` elements of `nums` should hold the final result. It does not matter what you leave beyond the first `k` elements.

Return `k` after placing the final result in the first `k` slots of `nums`.

Do **not** allocate extra space for another array. You must do this by **modifying the input array** in-place with O(1) extra memory.

### Example
```
Input:
[3, 2, 2, 3] val = 3

Output: 
[2,2]

k is 2
```

## Implementation
This section will be split in two. One will be going over the theory and pseudocode of the first method while the other will have the theory and pseudocode of the second method.

In the array `[3, 2, 2, 3]`, You need to remove the value 3. This can be done through the use of a linear search. Have a loop go through the entire array, then check if the number is not the same as the target. If it isn't, then that number gets to stay in the final array, and we also get to increment k. The resulting array should look like `[2, 2]` and k should be 2.

### Pseudocode
```
int k = 0;
for(i in arr) {
    if(nums[i] != val) {
        nums[k] = nums[i]
        ++k
    }
}

return k
```

While this method is concise and uses the two pointer technique, there is an even better method to use in the scenario when the target value is already at the front by the time you start the linear search. 

## 2nd Method Implementation

In the previous method, we searched through the whole array to check for numbers that weren't the target. This time, we will have two variables at the front and back to check for us. Taking the same array `[3,2,2,3]`, we have: 
```
[3, 2, 2, 3]
 i        j
```
In this case, we have the targets already fouund at i and j. In order to eliminate this, we simply switch the front element with the back, then decrement j. If the front is not equal to the target, we increment i. 

#### Full process
```
[3, 2, 2, 3]
 i        j 

[3, 2, 2, 3]
 i     j

[2, 2, 2, 3]
 i  j

[2, 2, 2, 3]
    i
    j

Now i and j are the same, meaning that the loop is not done. 
```

### Pseudocode
```
int i = 0
int j = nums.length

while(i<j) {
    if(nums[i] == val) {
        nums[i] = nums[j-1]
        j--;
    }
    else {
        i++
    }
}

return j
```