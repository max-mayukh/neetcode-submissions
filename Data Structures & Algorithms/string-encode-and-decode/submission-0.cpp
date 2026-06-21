class Solution {
public:

    string encode(vector<string>& strs) {
        string ans;
        for(auto i:strs) {
            ans += to_string(i.size());
            ans +="#";
            ans += i;
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i = 0;
        
        while (i < s.size()) {
            // 1. Find the delimiter '#' to extract the length
            int j = i;
            while (s[j] != '#') {
                j++;
            }
            
            // 2. Extract the length (handles multi-digit lengths like "12#")
            int length = stoi(s.substr(i, j - i));
            
            // 3. Move i to the start of the actual string (just after '#')
            i = j + 1;
            
            // 4. Extract the actual word using the length
            ans.push_back(s.substr(i, length));
            
            // 5. Move i past the processed word for the next iteration
            i += length;
        }
        
        return ans;
    }
};
