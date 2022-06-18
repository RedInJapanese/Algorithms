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