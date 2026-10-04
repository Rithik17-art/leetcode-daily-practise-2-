//i solved this problem by using brute force method.
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int first=0;
        int last=nums.size()-1;
        int mid=first+(last-first)/2;
        for (int mid = 0; mid < nums.size(); mid++){
            int leftsum=0;
            int rightsum=0;
            for (int i=mid;i>=0;i--){
                leftsum+=nums[i];
            }
            for (int j=mid;j<=nums.size()-1;j++){
                rightsum+=nums[j];
            }
            
            if (leftsum==rightsum){
                return mid;
            }
        }
        return -1;
        

    }
};
//other optimal solution i found out from the solution section of leetcode. it was a better solution than mine.so i learnt it and implemented it below.
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalSum=0;
        for (int num:nums) {
            totalSum+=num;
        }
        int leftSum=0;
        for (int i=0;i<nums.size();i++) {
            int rightSum=totalSum-leftSum-nums[i];
            if (leftSum==rightSum){
                return i;
            }
            leftSum+=nums[i];
        }
        return -1;
    }
};