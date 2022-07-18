# Leetcode #42 Trapping Rain Water

Given `n` non-negative integers representing an elevation map where the width of each bar is `1`, compute how much water it can trap after raining.

### Example
![image](rainwatertrap.png)
```
Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
Output: 6
Explanation: The above elevation map (black section) is represented by array [0,1,0,2,1,0,1,3,2,1,2,1]. In this case, 6 units of rain water (blue section) are being trapped.
```

## Implementation
This problem uses the two pointer technique and requires to have two maximums that constantly get updated. The code for the solution will be using version 2(front and back) of the two pointers technique. In this case, we can think back to the maximum water problem in which we had to constantly check the area between the front and back to find our max. This problem will be using a similar approach. 

But before that, how are we going to calculate the amount of water based on the walls in the array? Let's take an array `arr` that has `[1, 2, 3]` in it. The total area of this is 3 units of water, but here's the actual logic. 
```    
               __
        __ ---|  |
 __ ---|  |   |  |  
|  |   |  |   |  |
  1      2      3
```

in the case of 1 and 2, we use a similar method to the max water problem and have a maximum that we maintain every time we see a greater wall. Our max first starts with 1. After this, we have a wall of 0. In order to find the one unit of water on the left hand side, we can subtract 1 from 0. This works because any succeeding block in the array has to be at least 1 unit tall, meaninig that the area on the left is guaranteed to be at least one unit. This process can be repeated until we find the total area to be 3 units of water. 

Now, this works if you want to go from left to right. But if you want to go from both sides, you need to maintain two maximums from both ends of the array. One will be the left maximum, while the othehr will be the right maximum. Doing so will take the areas until the two pointers are at the same spot in the array. 

## Pseudocode
```
i = 0
j = size(arr)

while(i<j){
    if(arr[i]<arr[j]) {
        if(left_max < arr[i]){
            left_max = arr[i]
        }
        else {
            answer+=(left_max-arr[i])
        }
        i++
    }
    else {
        if(right_max<arr[j]){
            right_max = arr[j]
        }
        else {
            answer+=(right_max-arr[j])
        }
        j--
    }
}
```
