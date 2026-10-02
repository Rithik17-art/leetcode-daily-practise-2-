class Solution {
public:
    int totalMoney(int n) {
        int week=n/7;
        int remdays=n%7;   
        int total=((week*(week-1))/2)*7;
        total=total+week*28; 
        total=total+((remdays*(remdays+1))/2)+(week*remdays); 
        return total;
    }
};