class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> w1;
        map<char,int> w2;
        for(int i = 0; i < s.size(); ++i) {
            w1[s[i]]++;
        }
        for(int i = 0; i < t.size();++i){
            w2[t[i]]++;
        }

        return w1==w2;
    }
};
