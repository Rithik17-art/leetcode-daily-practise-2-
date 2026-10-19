class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans=0;
        int flag=0;
        for (int i=s.length()-1;i>=0;i--){
            if (s[i]!=' '){
                flag=1;
            }
            if (s[i]==' '&& flag==1){
                break;
            }
            if (s[i]!=' '){
                ans++;
            }

        }
        return ans;    
    }
};