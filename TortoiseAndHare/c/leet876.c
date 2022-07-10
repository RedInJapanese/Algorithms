#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h>

struct ListNode* middleNode(struct ListNode* head);

struct ListNode {
    int val; 
    struct ListNode *next;
};

int main(void){
    puts("test");
}

struct ListNode* middleNode(struct ListNode* head){
    struct ListNode* fast = head; 
    struct ListNode* slow = head; 
    
    while(fast && fast->next){
        slow = slow->next; 
        fast = fast->next->next;
    }
    return slow;
}
