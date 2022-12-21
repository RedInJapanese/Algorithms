#include <iostream> 

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if(!head->next){
            return head;
        }
        int length = 0;
        ListNode *temp = head; 

        while(temp != nullptr){
            temp = temp->next; 
            length+=1;
        }

        int middle = length/2; 
        length = 0; 
        ListNode *temp2 = head; 
        while(temp2 != nullptr){
            if(length == middle){
                head = temp2; 
                break;
            }
            temp2 = temp2->next; 
            length++;
        }

        return head;
    }
};