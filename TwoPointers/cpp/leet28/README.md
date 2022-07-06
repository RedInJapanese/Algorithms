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

```