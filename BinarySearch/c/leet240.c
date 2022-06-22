#include <stdio.h> 
#include <stdlib.h> 
bool search(int* nums, int numsSize, int target);
bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target);

int main(void){
    puts("lmao");
    return 0;
}

bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target){
    for(int i = 0; i<matrixSize; ++i) {
        if(search(matrix[i], *matrixColSize, target)){
            return true;
        }
    }
    return false;
}

bool search(int* nums, int numsSize, int target){
    int L, R, pivot;
    L = pivot = 0; 
    R = numsSize-1;

    while(L<=R) {
        pivot = L + (R-L)/2;
        if(nums[pivot] == target) {
            return true;
        }
        if(target<nums[pivot]) {
            R = pivot-1;
        }
        else {
            L = pivot + 1;
        }
    }
    return false;
}