class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int st = 0, en = nums.size() -1;

        vector<int> ans(2);
        while (st < en) {
            if (nums[st] + nums[en] == target) {
                ans[0] = st + 1;
                ans[1] = en + 1;
                break;
            }
            else if (nums[st] + nums[en] < target){
                st++;
            }
            else
                en--;
        }

        return ans;   
    }
};
