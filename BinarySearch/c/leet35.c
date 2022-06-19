#include <stdio.h> 
#include <unistd.h> 
#include <stdlib.h> 

int main(void) {
    puts("lmao");
    return 0;
}

int searchInsert(int* nums, int numsSize, int target){
    int L, R, pivot;
    L = pivot = 0; 
    R = numsSize-1;

    while(L<=R) {
        pivot = L + (R-L)/2;
        if(nums[pivot] == target) {
            return pivot;
        }
        if(target<nums[pivot]) {
            R = pivot-1;
        }
        else {
            L = pivot + 1;
        }
    }   
    return L;
}