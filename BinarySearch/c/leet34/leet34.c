#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h> 

int search(int *nums, int numsSize, int target);
int search2(int *nums, int numsSize, int target);
int* searchRange(int* nums, int numsSize, int target, int* returnSize);

int main(void) {
    puts("lol"); 
    return 0;
}

int* searchRange(int* nums, int numsSize, int target, int* returnSize){
    *returnSize = 2;
    int *returned = (int*)calloc(*returnSize, sizeof(int));
    returned[0] = search(nums, numsSize, target);
    returned[1] = search2(nums, numsSize, target);
    return returned;
}

int search(int *nums, int numsSize, int target) {
    int left = 0; 
    int right = numsSize-1; 
    int pivot = 0; 
    int index = -1;
    
    
    while(left<=right) {
        pivot = left + (right-left)/2; 
        if(nums[pivot] == target){
            index = pivot;
        }
        if(nums[pivot]>=target) {
            right = pivot-1;
        }
        else {
            left = pivot+1;
        }
    }
    return index;
}

int search2(int *nums, int numsSize, int target) {
    int left = 0; 
    int right = numsSize-1; 
    int pivot = 0; 
    int index = -1;
    
    
    while(left<=right) {
        pivot = left + (right-left)/2; 
        if(nums[pivot] == target){
            index = pivot;
        }
        if(nums[pivot]<=target) {
            left=pivot+1;
        }
        else {
            right = pivot-1;
        }
    }
    return index;
}