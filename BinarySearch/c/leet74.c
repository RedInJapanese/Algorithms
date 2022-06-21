#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h> 

int main(void) {
    puts("poggers"); 
    return 0;
}

bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target){
    int vectorSize = matrixSize*(*matrixColSize);
    int *vector = (int*)calloc(vectorSize+1, sizeof(int));
    int x = 0;
    
    for(int i = 0; i<matrixSize; ++i) {
        for(int j = 0; j<(*matrixColSize); ++j) {
            vector[x] = matrix[i][j];
            x++;
        }
    }
    
    int left, right, pivot;
    left = pivot = 0; 
    right = vectorSize-1; 
    
    while(left<=right) {
        pivot = left + (right-left)/2;
        if(vector[pivot] == target) {
            free(vector); 
            vector = NULL; 
            return true;
        }
        else if(target>vector[pivot]){
            left = pivot+1;
        }
        else {
            right = pivot-1;
        }
    }
    free(vector);
    vector = NULL;
    return false;
}