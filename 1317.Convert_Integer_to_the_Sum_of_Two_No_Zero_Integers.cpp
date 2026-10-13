class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        vector<int>ans;        
        int x=1;
        int y=n-1;
        auto hasZero=[](int num) {
            while (num > 0) {
                if (num%10==0) return true;
                num/=10;
            }
            return false;
        };
        while (hasZero(x)||hasZero(y)) {
            x++;
            y--;
        }
        ans.push_back(x);
        ans.push_back(y);
        return ans;
    }
};