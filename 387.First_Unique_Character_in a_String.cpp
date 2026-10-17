class Solution {
public:
    int firstUniqChar(string s) {
        for (int i=0;i<s.size();i++) {
            bool different=true;
            for (int j=0;j<s.size();j++) {
                if (i!=j && s[i]==s[j]) {
                    different=false;
                    break;
                }
            }
            if (different) {
                return i; 
            }
        }
        return -1;
    }
};