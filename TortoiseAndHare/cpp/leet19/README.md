# Leetcode #19

Given the `head` of a linked list, remove the `nth` node from the end of the list and return its head.

```
Input: head = [1,2,3,4,5], n = 2
Output: [1,2,3,5]
```

## Implementation

In order to solve this problem, you first need to have two different pointers that traverse the list in order to find the desired node. However, we don't need to traverse every single node, as if n is a value like 3 or 2, then not every number will match where n is supposed to be. In this scenario, you want one pointer that is offset by 1n in the list, so that you can use that node to have one area that is ahead of every nth node and a slow pointer that is one step behind every nth node. This way, you can keep iterating across the list until the fast pointer becomes null, in which case the slow pointer is now the preceding node before the one you need to delete. 

**Example**
```
 [1, 2, 3, 4, 5] n = 2
S
F

 [1, 2, 3, 4, 5]
S
     F  
(Offsetting the fast pointer by n times)

 [1, 2, 3, 4, 5]
S
     F  

 [1, 2, 3, 4, 5]
  S
        F
Now, the two pointers will keep moving at this rate until the fast pointer becomes null.

 [1, 2, 3, 4, 5]
        S
                 F
Now that the fast pointer is null, the smlow pointer is the preceding pointer before the one we need to delete. For this, we can simply set the next value of the slow pointer to its next next value. 
 [1, 2, 3, 5]
        S
             F
```

**Pseudocode**
```
Node dummy_head = null 
dummy_head->next = head

Node slow = dummy_head
Node fast = dummy_head

for i in n+1{
    fast = fast->next
}

while(fast) {
    slow = slow->next
    fast = fast->next

}

slow->next = slow->next->next
return dummy_head->next
```

