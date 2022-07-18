# Leetcode 1768 Merge Strings Alternately
You are given two strings `word1` and `word2`. Merge the strings by adding letters in alternating order, starting with `word1`. If a string is longer than the other, append the additional letters onto the end of the merged string.

Return the *merged string*.

**Example 1**
```
Input: word1 = "abc", word2 = "pqr"
Output: "apbqcr"
Explanation: The merged string will be merged as so:
word1:  a   b   c
word2:    p   q   r
merged: a p b q c r
```

## Implementation
This problem uses a simple application of the parallel pointers version of the two pointer technique. This is where there are two different arrays and one pointer is given to traverse each array. In doing so, we can append each element alternating from the first array to the second into the final merged array. 

## Pseudocode
```
arr1 = "abc" 
arr2 = "pqr" 

i = 0
j = 0
final = []
while(i<size(arr1) && j<size(arr2)) {
    final.append(arr1)
    final.append(arr2)
    i++
    j++
}
```