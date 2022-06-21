#include <iostream> 
#include <string> 

using namespace std; 

int main(void) {
    cout << "poggers" << endl;
}

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size= nums.size();
        int m = 0;
        
        for(int x = 0; x<size-1; ++x) {
            if(nums[x]!=nums[x+1]){
                nums[m] = nums[x];
                ++m;
            }
        }
        nums[m] = nums[size-1];
        return m+1;
    }
};