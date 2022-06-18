#include <stdio.h>
#include <unistd.h>
#include <stdlib.h> 
#include <stdint.h> 
#include <inttypes.h> 

int search(int* nums, int numsSize, int target);
int searchEasy(int* nums, int numsSize, int target);


int main(void) {
    puts("any lmaoers?");
    return 0;
}

int search(int* nums, int numsSize, int target) {
    int pivot, L, R;
    L = pivot = 0; R = numsSize-1;
    
    while(L<=R) {
        pivot = L +(R-L)/2;
        if(nums[pivot] == target) {
            return pivot;
        }
        if(target < nums[pivot]) {
            R = pivot-1;
        }
        else {
            L = pivot+1;
        }
    }
    return -1;
}

int searchEasy(int *nums, int numsSize, int target) {
    if(numsSize == 1 && nums[0]== target){return 0;}
    for(int i = 0; i<numsSize; ++i) {
        if(nums[i] == target) {
            return i;
        }
    }
    return -1;
}