#include <iostream> 
#include <string> 

using namespace std;
int main(void) {
    cout << "any lmaoers?" << endl;
    return 0;
}

int search(int *nums, int numsSize, int target) {
    int L, R, pivot = 0; 
    L = 0; 
    R = numsSize-1; 
    while(L<=R) {
        pivot = L + (R-L)/2; 
        if(nums[pivot] == target) {
            return pivot;
        }
        if(target < nums[pivot]) {
            R = pivot-1;
        }
        else {
            L = pivot + 1;
        }
    }
    return -1;
}