class Solution {
public:
    bool checkValidString(string s) {
       stack <char> sta;
       for(char ch:s){
        if(ch == '(' || ch == '*'){
            sta.push(ch);
        }
        else{
            if(sta.empty())return false;
                sta.pop();
        }
       }
        while(!sta.empty())sta.pop();
        reverse(s.begin(),s.end());
        for(char ch:s){
            if(ch == ')' || ch == '*'){
                sta.push(ch);
            }
            else{
                if(sta.empty())return false;
                sta.pop();
            }
        }
       return true;
    }
};