//tried using liear search.but it showed tle.
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int first=-1;
        int last=-1;
        
        for (int i=0;i<n;i++){
            if (nums[i]==target){
                first=i;
                break;

            }
        }
        for (int j=n-1;j>=0;j--){
            if(nums[j]==target){
                last=j;
                break;
            }
        }
        return {first,last};
    }
    
};
//tried the same with biinary search and it got accepeted after some minor changes.
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int first=-1;
        int last=-1;
        int i=0;
        int j=n-1;
        while (i<=j) {
            int mid=i+(j-i)/2;
            if (nums[mid]==target) {
                first=mid;
                j=mid-1; 
            } else if (nums[mid] < target) {
                i=mid+1;
            } else {
                j=mid-1;
            }
        }
        i=0;
        j=n-1;
        while (i<=j) {
            int mid=i+(j-i)/2;
            if (nums[mid]==target) {
                last=mid;
                i=mid+1;
            } else if (nums[mid]<target) {
                i=mid+1;
            } else {
                j=mid-1;
            }
        }

        return {first, last};
    }
};



