class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int i=0;
        int j=0;
        int mn = INT_MAX;
        while(j<nums.size()){
            if(j-i+1 == k){
                mn = min(mn, nums[j]-nums[i]);
                i++;
            }
            j++;
        }
        return mn;
    }
};