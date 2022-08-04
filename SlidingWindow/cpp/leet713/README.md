# Leetcode #713
Given an array of integers `nums` and an integer `k`, return the *number of contiguous subarrays where the product of all the elements in the subarray is strictly less than* `k`.

**Example**
```
Input: nums = [10,5,2,6], k = 100
Output: 8
Explanation: The 8 subarrays that have product less than 100 are:
[10], [5], [2], [6], [10, 5], [5, 2], [2, 6], [5, 2, 6]
Note that [10, 5, 2] is not included as the product of 100 is not strictly less than k.
```

## Implementation 
In order to account for singular elements in the array that might satisfy the constraints, we will add one every time we have a product between two different indices that are less than `k`. Now, instead of checking for if indices satisfy k, we will be checking if their product is greater than or equal to k. This way, we have an opportunity to reset k by dividing it by the left side of our window until it is less than or equal to k. Doing so allows us to jump to the next combination that works for us. In doing so, the time complexity is shortened. 
 
 **Example**
 ```
 [10, 5, 2, 6]
 
 10, 5, 2, 6
  i
  j

 10

 10, 5, 2, 6
  i  j

50

10, 5, 2, 6
 i     j

100

The product is now at 100, so we divide by 10

100/=10 
The total is now 10, so we continue

...
ans = 8
```

## Pseudocode
```
int i, j = 0
for(i in length){
    total*=nums[j]
    while(total>=k){total /= nums[i++]}
    count+= j-i+1
}
return count
```