#include <iostream> 
#include <string> 

using namespace std;
int removeElement(vector<int>& nums, int val);
int main(void) {
    cout <<  "lol" << endl;
    return 0;
}
int removeElement(vector<int>& nums, int val) {
    int size = nums.size();
    int i = 0; 
    int j = size; 
    
    while(i<j) {
        if(nums[i] == val) {
            nums[i] = nums[j-1];
            j--;
        }
        else {
            i++;
        }
    }    
    return j;
}