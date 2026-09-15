class Solution {
public:
    bool isValid(string s) {
        stack <char> sta;
        for(char ch: s){
            if(ch == '(' || ch == '{' || ch == '['){
                sta.push(ch);
            }
            else{
                if(sta.empty())return false;
            char top = sta.top();
            if(ch == ')' && top == '(' || ch == ']' && top == '[' || ch == '}' && top == '{'){
                sta.pop();
            }
            else{
                return false;
            }
            }
        }
return sta.empty();
    }
};