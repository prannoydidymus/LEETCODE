class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int a = s.size();
        int b = p.size();
        int i = 0;
        
        unordered_map<char, int> m;
        unordered_map<char, int> n;
        vector<int> ans; 

        for(int j = 0; j < b; j++){
            m[p[j]]++;
        }
        for(int j = 0; j < a; j++){
            n[s[j]]++;
            
            if(j - i + 1 > b){
                n[s[i]]--;
                if(n[s[i]] == 0){
                    n.erase(s[i]);
                }
                i++; 
            }

            if(j - i + 1 == b){
                if(m == n){
                    ans.push_back(i);
                }
            }
        }

        return ans;
    }
};