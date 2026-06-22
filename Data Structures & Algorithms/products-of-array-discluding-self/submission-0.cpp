class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int su = 1;
        ans[0] = 1;
        for(int i = 1; i < n; ++i) {
            ans[i] = ans[i-1] * nums[i-1];
        }
        for (int i = n-2; i >= 0; --i) {
            su = su * nums[i+1];
            ans[i] *= su;
        }

        return ans;
    }
};