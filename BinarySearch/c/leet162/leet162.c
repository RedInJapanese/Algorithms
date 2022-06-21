#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h> 

int findPeakElement(int* nums, int numsSize);

int main(void) {
    puts("lmao"); 
    return 0;
}

int findPeakElement(int* nums, int numsSize){
    if(numsSize == 0){return -1;}
    if(numsSize == 1){return 0;}
    
    int left, right, pivot; 
    left = pivot = 0; 
    right = numsSize-1; 
    
    while(left<right) {
        pivot = left + (right-left)/2;
        if(nums[pivot]>nums[pivot+1]) {
            right = pivot;
        }
        else {
            left = pivot +1;
        }
        
    }
    return left;
}