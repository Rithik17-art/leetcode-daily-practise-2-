class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int count2=0;
        for (int i=0;i<nums.size();i++){
            if (nums[i]==1){
                count+=1;
                count2=max(count,count2);
            }
            else{
               count=0;
            }   
        }
        return count2;       
    }
};