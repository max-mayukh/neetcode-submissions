class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> ump;
        for(int i = 0; i < nums.size(); ++i) {
            ump[nums[i]]++;
        }
        multimap<int, int> mmp;
        for(auto i: ump) {
            mmp.insert({i.second, i.first});
        }

        vector<int> ans;
        for(auto it = mmp.rbegin(); it !=mmp.rend() && k>0; ++it) {
            ans.push_back(it->second);
            k--;
        }
        return ans;
    }
};
