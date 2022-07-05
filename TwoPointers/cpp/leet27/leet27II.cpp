#include <iostream> 
#include <string>

using namespace std; 

int removeElement(vector<int>& nums, int val);
int main(void) {
    cout << "lmao" << endl;
}

int removeElement(vector<int>& nums, int val) {
        int size = nums.size();
        int m = 0;
        for(int i = 0; i<size; ++i) {
            if(nums[i]!=val) {
                nums[m] = nums[i];
                m++;
            }
        }

        return m;
}