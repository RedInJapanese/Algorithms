#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h>

#define MAX 101

struct ListNode* middleNode(struct ListNode* head);

struct ListNode {
    int val; 
    struct ListNode *next;
};

int main(void){
    puts("test");
}

struct ListNode* middleNode(struct ListNode* head){
    int *arr = (int*)calloc(MAX, sizeof(int));
    int i = 0;
    int j = 0;
    
    struct ListNode* start = head;
    while(head){
        arr[i] = head->val;
        head = head->next;
        i++;
    }
    
    int x = 0; 
    int y = i-1;
    while(x<y){
        if(arr[x] == arr[y] && x == y){
            break;
        }
        x++;
        y--;
    }
    
    while(start){
        if(start->val == arr[x] && j == x){
            head = start; 
            break;
        }
        j++;
        start = start->next;
    }
    return start;    
}
