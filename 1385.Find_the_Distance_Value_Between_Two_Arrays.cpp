//solved first directly through brute force method.
class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int n1=arr1.size();
        int n2=arr2.size();
        int ans=0;

        for (int i=0;i<n1;i++) {
            bool valid=true;
            for (int j=0;j<n2;j++){
                if (abs(arr1[i]-arr2[j])<=d){
                    valid=false;
                }
            }
            if(valid) {
                ans++;
            }
        }
        return ans;
    }
};
//more optimized solution beats 100%.
class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int ret=0;
        for (int n:arr1){
            bool foundClose=false;
            for (int m:arr2) {
                if (abs(m-n)<=d) {
                    foundClose=true;
                    break;
                }
            }
            if (!foundClose) {
                ret++;
            }
        }
        return ret;
    }
};