class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
        vector<int> days={0,31,59,90,120,151,181,212,243,273,304,334};
        vector<string> s={"Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", };
        int total=0;
        for(int i=1971;i<year;++i)
        {
            if ((i%400==0)||(i%4==0&&i%100!=0)) {
                    total+=366;
                }
                else total+=365;
        }
        if (((year%400==0)||(year%4==0&&year%100!=0))&&month>2) 
            {
                total++;
            }
            total+=days[month-1];
            total+=day;
            return s[(total-1)%7];
    }
};