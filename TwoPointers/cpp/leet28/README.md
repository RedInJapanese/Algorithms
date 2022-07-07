# leetcode #28

Implement `strStr()`.

Given two strings `needle` and `haystack`, return the index of the first occurrence of `needle` in `haystack`,   or `-1` if `needle` is not part of `haystack`.

**Clarification**:

What should we return when `needle` is an empty string? This is a great question to ask during an interview.

For the purpose of this problem, we will return 0 when `needle` is an empty string. This is consistent to C's `strstr()` and Java's `indexOf()`.

## Implementation: 

This README will be going over the regular nested for loop method to solve this problem. The KMP algorithm will be discussed in a separate directory(hopefully, depends on if I want to learn an obscure algorithm).

In order to search for the substring inside of the string, we first need to find the first occurrence of that string. This is done looping through every character in the haystack string, checking if it is in the needle string using the inner for loop. If it isn't, we immediately break out of that loop and move on to the next character. If it is, we simply use the iterator from the first loop and keep incrementing it by the inner loop's iterator till we find a  character that isn't the same. If the string ends up being the same as the needle, we return the outermost loop's iterator.

**Example**
```
"h e l l o" 
"l l"

"h e l l o"
1st character is not the same as the needle

"h e l l o" 
2nd character is not the same as the needle

The third character is the same as the start of the needle, so we're going to check the rest of the word by iterating for the length of the needle

"he l l o"
   "l l"
Here, there is a perfect match, meaning that the needle is inside the haystack
```

While appearing conducive, one area where this algorithm is inefficient is that it relies on the use of looking at every character. In the example, we don't have to look at the 'o', as it is only one character while the needle has a length of 2. In order to do something about this, we need to divide the haystack string into partitions and only look at the ones with a length of 2. This is done with the following line: `length(haystack)+1-length(needle)`. This line will split the string such that the remaining characters that don't fit in with the rest of the array don't get checked. 

### Pseudocode
```
strstr(haystack, needle){
    for(i in length(haystack)+1-length(needle)){
        for(j in length(needle)){
            if(haystack[i+j]!=needle[j]){ 
                break
            }
            if(j == length(needle)-1){
                return i
            }
        }
    }
    return -1
}
```
the `haystack[i+j]` is done because its more efficient to add i by j every time to search the haystack string for the needle.