#include <stdio.h> 
#include <unistd.h> 
#include <stdlib.h> 

int* twoSum(int* numbers, int numbersSize, int target, int* returnSize);

int main(void) {
    puts("poggers."); 
    return 0;
}


int* twoSum(int* numbers, int numbersSize, int target, int* returnSize){
    *returnSize = 2; 
    int *returned = (int*)calloc(*returnSize, sizeof(int));
    int x = 0; 
    int y = numbersSize-1;
    while(x<y){
        if(numbers[x]+numbers[y] == target){
            returned[0] = x+1;
            returned[1] = y+1;
        }
        if(numbers[x]+numbers[y]>target){
            y--;
        }
        else {
            x++;
        }
    }
    return returned;
}