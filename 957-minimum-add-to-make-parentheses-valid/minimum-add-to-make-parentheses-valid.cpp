class Solution {
public:
    int minAddToMakeValid(string s) {
        stack <char> sta;
        int count = 0;
        for(char ch:s){
            if(ch == '('){
                sta.push(ch);
            }
            else{
                if(!sta.empty())sta.pop();
                else{
                    count++;
                }
            }
        }
        count += sta.size();
        return count;
    }
};