class Solution {
public:
    bool isPalindrome(string s) {
        if(s=="")
            return  true;
        int n = s.size();
        int j = 0;
        string s1;
        for (int i = 0; i< s.size();++i){
            if(isupper(s[i]))
                s[i] = tolower(s[i]);
            if(isalnum(s[i]))
                s1 += s[i];
        }
        string s2 = s1;
        reverse(s1.begin(), s1.end());
        return s1 == s2;
    }
};