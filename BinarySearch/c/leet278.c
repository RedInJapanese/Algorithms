#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.g> 

int main(void) {
    puts("lmao");
    return 0;
}

int firstBadInteger(int n) {
    int L, R, pivot;
    L = pivot = 1;
    R = n; 

    while(L<=R) {
        pivot = L + (R-L)/2;
        if(isBadVersion(pivot)) {
            if(!isBadVersion(pivot-1)) {
                return pivot;
            }
            else {
                R = pivot-1;
            }
        }
        else {
            L = pivot+1;
        }
    }
    return -1;
}