#include <stdio.h>
#include <stdlib.h>

int areaCheck(int i, int j, int iPos, int jPos);


int main(void) {
    puts("test"); 
    return 0;
}

int maxArea(int* height, int heightSize){
    int x = 0; 
    int y = heightSize-1;
    int current = 0; 
    int max = 0; 
    
    while(x<y) {
        current = areaCheck(height[x], height[y], x, y);
        if(current>max){
            max= current;
        }
        if(height[x]<height[y]){
            x++;
        }
        else {
            y--;
        }
    }
    return max;
}

int areaCheck(int i, int j, int iPos, int jPos) {
    int width = 0; 
    int height = 0; 
    if(i==j){
        height = i;
    }
    else if(i<j){
        height = i;
    }
    else {
        height = j;
    }
    width = jPos-iPos;
    return height*width;
}