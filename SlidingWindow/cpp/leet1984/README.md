# leetcode #1984
You are given a **0-indexed** integer array `nums`, where `nums[i]` represents the score of the `ith` student. You are also given an integer `k`.

Pick the scores of any k students from the array so that the **difference** between the **highest** and the **lowest** of the k scores is minimized.

Return the **minimum** possible difference.

## Implementation

This problem uses the fixed window variant of the sliding window algorithm. This is done by first looking at the window size k. In this scenario, k is the number of students from which you can extrapolate test scores. However, for the array, you need to keep track of the max and min scores regardless of the size of k. In order to simplify this, simply sort the array so that the smallest score will always be on the left hand side of the window and the largest element will always be on the right. Then, you can maintain your window size and keep track of the lowest difference. 

**Example**
```
nums = [9,4,1,7], k = 2
[1, 4, 7, 9]
 i 
 j
here, the array is sorted, so now we can find our scores

[1, 4, 7, 9]
 -  -
lowest = 3

[1, 4, 7, 9]
 -     - 
lowest = 3

[1, 4, 7, 9]
 -        -
lowest = 8

...

lowest = 2
```

## Pseudocode
```
i = 0
j = 0
count = *some arbitrarily large number

while(j<size(nums)){
    if(j-i+1 == k){
        count = min(count, nums[j]-nums[i])
        i++
    }
    j++
}
return count
```