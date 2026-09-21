class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int i = 0;
        int max = 0;
        unordered_map <char,int> m;
        for(int j = 0;j<n;j++){
m[s[j]]++;
while(m[s[j]] > 1){
    m[s[i]]--;
    i++;
}
   max = std::max(max,j-i+1); 

        }
        return max;
    }
};