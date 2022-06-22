#include <iostream> 
#include <string> 

int main(void) {
    cout << "pog!" << endl
    return 0;
}

bool search(vector<int>& nums, int target) {
        int size= nums.size();
        if(size == 0){
            return false;
        }
        int m = 0;
        
        for(int x = 0; x<size-1; ++x) {
            if(nums[x]!=nums[x+1]){
                nums[m] = nums[x];
                ++m;
            }
        }
        nums[m] = nums[size-1];
        int numsSize = m+1;
        
        int left, right, pivot; 
        left = pivot = 0; 
        right = numsSize-1; 
        
        while(left<right) {
            pivot = left + (right-left)/2; 
            if(nums[pivot]>nums[right]){
                left = pivot +1;
            }
            else {
                right = pivot;
            }
        }
        
        pivot = left; 
        right = numsSize-1; 
        left = 0; 
        
        if(target>=nums[pivot] && target<=nums[right]) {
            left = pivot;
        }
        else {
            right = pivot;
        }
        
        
        while(left<=right){
            pivot = left+(right-left)/2;
            
            if(nums[pivot] == target){
                return true;
            }
            if(target>nums[pivot]) {
                left= pivot+1;
            }
            else {
                right = pivot-1;
            }
        }
        return false;
    }