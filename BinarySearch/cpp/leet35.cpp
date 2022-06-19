#include <iostream> 
#include <string> 

using namespace std;

int main(void) {
    cout << "any lmaoers?" << endl;
    return 0;
}

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
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
};