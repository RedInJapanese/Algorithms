# Binary Search

## What is binary search?
- Algorithm used in computer science that is used in order to search for elements in a shorter amount of time.

### Terminology
- Target: Value you are searching for in the array
- Index: Current element in the array
- Left, Right: Other elements in the space of the array when searching for the target
- Mid: The mid point of the binary tree

#### Search Space
The space in the array containing the left, the right, and the middle. This is used in order to check if the midpoint of the array is equal to the target value. If so, then the target has been found. If not, then you need to 

```
                  Search Space
[-----------------[L----M----R]------------------]
                   ^    ^    ^
                   |    |    |
                 Left  Mid  Right
```
In a problem, the midpoint of the array can be considered to be the pivot of the array. 
- If the value is equal to the pivot, we're done. 
- If the value is greater than the pivot, we go right. 
- If the value is less than the pivot, we go left.

## Implementation
1) create a pivot, a left, and a right variable 
    - The left variable is the start of the array(the leftmost point)
    - The right variable is the end of the array(the rightmost point)
    - The pivot is inside of a loop, which is set to left+(right-left)/2
    Explanation: https://ai.googleblog.com/2006/06/extra-extra-read-all-about-it-nearly.html
2) while the search space is greater than 0(the left position is still not at the right position)
3) set the pivot to the new value
4) go through one of three conditionals
    - if the target is at the pivot, return the pivot
    - if the target is less than the pivot, the right is pivot-1
    - else, the left is pivot+1

### Visualization
## Target = 9
```
[-1, 0, 3, 5, 9, 12]
  L     M     T   R
```
The target(9) is greater than the pivot, meaning that we now change the left to pivot+1

```
[-1, 0, 3, 5, 9, 12]
           L  M   R
              T
```
Now, the target and the pivot are the same, meaning that we can return the pivot 

## Target = 0
```
[-1, 0, 3, 4, 5, 9, 12]
  L  T     M         R
```

The target(0) is less than the pivot, meaning that the right becomes pivot - 1

```
[-1, 0, 3, 4, 5, 9, 12]
  L  T  R           
     M
```
The target and the pivot are now the same, so we return the pivot

### search function
```
search(nums[], target) {
    L, R, pivot = 0; 
    L = 0; 
    R = length - 1;
    while(L<=R) {
        pivot = L + (R - L)/2;
        if(nums[pivot] == target) {
            return pivot;
        }
        if(target<nums[pivot]) {
            R = pivot-1;
        }
        else {
            L = pivot+1;
        }
    }
    return -1;
}
```
### The 3 parts of a sucessful binary search
- Sorting the array if it isn't already sorted
- Running a binary search after the array is sorted completely
- Finding the candidates in the remaining space 

### How to recognize binary search problems
Whenever a problem asks you to search for a specific target or index in an array, you should consider the possibility of binary search. 


