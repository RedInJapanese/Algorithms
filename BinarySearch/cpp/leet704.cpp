#include <iostream> 
#include <string> 

using namespace std;
int main(void) {
    cout << "any lmaoers?" << endl;
    return 0;
}

int search(int *nums, int numsSize, int target) {
    int pivot, L, R;
    L = pivot = 0; R = numsSize-1;
    if(numsSize == 1 && nums[0] == target) {return 0;}
    if(numsSize == 2 && nums[0] == target) {return 0;}
    if(numsSize == 2 && nums[1] == target) {return 1;}
    if(nums[L] == target) {return L;}
    if(nums[R] == target){return R;}
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