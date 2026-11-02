class Solution {
public:
    int dayOfYear(string date) {
        vector <int> ans={0,31,59,90,120,151,181,212,243,273,304,334,365};
        int total=0;
        int year=stoi(date.substr(0,4));
        int month=stoi(date.substr(5,7));
        int day=stoi(date.substr(8,9));
        if((year%400==0&&month>2)||(year%4==0&&year%100!=0&&month>2)){
            return ans[month-1]+day+1;
        }
        return ans[month-1]+day;
    }
};