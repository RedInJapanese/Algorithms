# Leetcode #11
You are given an integer array `height` of length `n`. There are `n` vertical lines drawn such that the two endpoints of the `ith` line are `(i, 0)` and `(i, height[i])`.

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the *maximum amount of water a container can store.*

**Notice** that you may not slant the container.

**Example**
![image](question_11.jpg)


## Implementation

This problem will use version 2(front and back) of the two pointer technique. The arrays given for each test can be thought of as different sized walls. An element of 6 can be thought of as 6 foot wall, whereas an element of 4 would be a 4 foot wall. Using this, we can start from the front and back walls and keep going towards the center until we determine a maximum. 

**Example**
```
[1, 3, 0, 6]
 i        j

The area is 3, meaning that the maximum area currently is also 3. 

1 is less than 6, so we increment i by 1
[1, 3, 0, 6]
    i     j
The area is 6, meaning that the maximum area is now 6.
```
We won't run the entire thing, but the max area for this scenario is 6. The way the algorithm works is that we have a maximum variable that gets updated everytime we find an area that is greater than our current maximum. After finding the area for those respective functions, we then either increment or decrement a pointer based on which one is smaller. 

## Pseudocode

**Helper function**
```
area_calc(i, j) {
    height = i if i is less than j. If not, then height is j
    width = the distance between i and j

    return height * width
}
```

**Main Function**
```
max_check() {
    i = 0
    j = size
    max = 0

    while(i<j){
        if(max<area_calc(i, j)){
            max = area_calc(i, j)
        }
        if(i< j){
            i++
        }
        else {
            j--
        }
    }
    return max
}
```
