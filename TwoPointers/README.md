# Two pointer technique

## What it is
The two pointer technique is where you have two variables that traverse an array in a specific order in order to perform a specific task. These two variables don't necessarily have to be pointers, but they both start in different positions and stop when the two of them meet. In the two pointer technique, the variables will usually start between the front and next element, or the front and back elements. The time complexity is `O(n)`.
### Example
```
[5, 4, 2, 6, 8, 9]
 i              j
```
In this example, i and j would eventually reach the  middle, in which case the loop would stop
```
[5, 4, 2, 6, 8, 9]
 i  j            
```
In this case, i and j are contiguous. One will reach the end faster than the other, but the loop will stop when both have reached the end.

## When to use it
The two pointers technique should generally be used when considering iterating through an array or iterable data structure. It can be used for finding pairs or other functions(depends on the problem that you find).

## Concept or Syntax? 
This is a new section that will be included in each README for future algorithms that will cover the emphasis that each algorithm brings on either being conceptual or syntactical. For the two pointer technique, it is more conceptual, as there are at least five different variations on the two pointer technique. Because of how many variations there can be, it is better to look at the two pointer technique conceptually rather than syntactically. The barebones syntax of each known variation will still be provided, but don't put too much effort into memorizing them. Your hands will do the work after you've had enough experience with this algorithm and done enough problems. 

## Implementation

### Contiguous
```
search(nums) {
    int i, j
    i = 0
    j = 1

    while(i<length(nums)-1){
        i++
        j++
    }
}
```
### Front and back
```
search(nums) {
    int i, j
    i = 0
    j = length(nums)-1

    while(i<j){
        i++
        j--
    }
}
```
### Parallel Pointers
```
arr1 = [1, 2, 3, 4]
arr2 = [5, 6, 7, 8]

size1 = length(arr1)
size2 = length(arr2)

i = 0
j = 0
while(i<size1 && j<size2) {
    i++
    j++
}
```
### Trailing pointers
```
arr1 = [2, 3, 4, 5, 6, 7]

i = 0
j = 0

while(j<size) {
    if(j%2 == 0){
        i++
        j = i
    }
    j++
}
```
### Single Pointer
```
arr1  = [1, 2, 3, 4]

for i in arr {
    i++
}
```
**Note:** The trailing pointer technique is quite similar to the sliding window algorithm, but not the same. There will be key difference depending no the problem(Look at the swapping zeros problem on leetcode).

Note that this is the barebones structure of what either version of the two pointers technique should look like. The version really depends on what the problem is asking for. 