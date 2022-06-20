#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void) {
    puts("poggers");
    return 0;
}

int search(int* nums, int numsSize, int target){
    if(numsSize == 0) {return -1;}
    if(numsSize == 1 && nums[0] == target){return 0;}
    if(numsSize == 1 && nums[0] != target){return -1;}
    int L, R, pivot; 
    L = 0; 
    R = numsSize-1; 
    
    while(L<R) {
        pivot = L + (R-L)/2; 
        if(nums[pivot] > nums[R]){
            L = pivot + 1;
        }
        else {
            R = pivot;
        }
    }
    
    pivot = L; 
    L = 0; 
    R = numsSize-1;
    
    if(target>=nums[pivot] && target<=nums[R]){
        L= pivot;
    }
    else {
        R = pivot;
    }
    while(L<=R) {
        pivot = L+(R-L)/2;
        if(nums[pivot] == target) {
            return pivot;
        }
        if(target < nums[pivot]) {
            R = pivot -1;
        }
        else {
            L = pivot+1; 
        }
    }
    return -1;
}