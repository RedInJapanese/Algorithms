class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if (k <= 1) return 0;
        int prod = 1, ans = 0, left = 0;
        for (int right = 0; right < nums.size(); right++) {
            prod *= nums[right];
            while (prod >= k) {cout << prod << endl; prod /= nums[left++]; cout << prod << endl;}
            cout << right << endl;
            cout << left << endl;
            cout << "\n";
            ans += right - left + 1;
        }
        return ans;
    }
};