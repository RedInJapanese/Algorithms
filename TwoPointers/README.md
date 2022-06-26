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

## Implementation

### Contiguous: 
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
Note that this is the barebones structure of what either version of the two pointers technique should look like. The version really depends on what the problem is asking for. 