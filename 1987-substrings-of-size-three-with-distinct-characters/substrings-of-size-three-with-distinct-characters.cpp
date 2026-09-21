class Solution {
public:
    int countGoodSubstrings(string s) {
        int i = 0;
        int n = s.size();
        int count  = 0;
        unordered_map <char,int> m;
        for(int j = 0;j<n;j++){
                        m[s[j]]++;
            if(j-i+1 > 3){
                
                m[s[i]]--;
                if(m[s[i]] == 0){
                    m.erase(s[i]);
                }
                i++;
            }
            if(m.size() == 3){
                count++;
            }
        }
        return count;
    }
};