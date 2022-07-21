class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0.0; 
        double ans = 0.0;
        
        for(int i = 0; i<k; ++i){
            sum+=nums[i];
        }
        sum = sum;
        ans = sum; 
        
        for(int j = k; j<nums.size(); ++j) {
            sum = sum + nums[j] - nums[j-k];
            ans = std::max(ans, sum);
        }
        return ans/k;
    }
};