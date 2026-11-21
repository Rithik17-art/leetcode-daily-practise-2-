class Solution {
public:
    double average(vector<int>& salary) {
        vector<int> ans;
        int result;
        for(int i=0;i<salary.size();i++){
            if(salary[i]==*max_element(salary.begin(),salary.end())||salary[i]==*min_element(salary.begin(),salary.end())){
                continue;
            }
            else{
                ans.push_back(salary[i]);
            }
        }
        double x=0;
        for(int j=0;j<ans.size();j++){
            x=x+ans[j];
        }
        return x/ans.size(); 
    }
};