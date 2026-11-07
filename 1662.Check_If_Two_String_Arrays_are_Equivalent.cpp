//solved using the brute force method which has a is not efficient because of the 2 normal for loops.
class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1="";
        string s2="";
        for(int i=0;i<word1.size();i++){
            s1+=word1[i];
        }
        for(int j=0;j<word2.size();j++){
            s2+=word2[j];
        }
        if(s1==s2){
            return true;
        }
        else{
            return false;
        }    
    }
};
//more efficient solution which beats 100% uses a range based for loop.
class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1="";
        string s2="";

        for(const string&s:word1)
            s1+=s;
        for(const string&s:word2)
            s2+=s;

        return s1==s2;
    }
};