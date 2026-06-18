class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hmap;
        for(int i = 0; i < nums.size(); ++i) {
            if(hmap.find(target - nums[i]) != hmap.end()) {
                vector<int> ans;
                ans.push_back(i);
                ans.push_back(hmap[target - nums[i]]);
                sort(ans.begin(), ans.end());
                return ans;
            }
            hmap[nums[i]] = i; 
        }
        return {-1,1};
    }
};
