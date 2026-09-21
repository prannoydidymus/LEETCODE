class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();
        int i = 0;
        unordered_map <char,int> a;
        unordered_map <char,int> b;
        if(n > m){return false;}
        for(int j = 0;j<n;j++){
            a[s1[j]]++;
        }
            for(int j =0;j<m;j++){
                b[s2[j]]++;
            if(j-i+1 > n){
                b[s2[i]]--;
        if(b[s2[i]] == 0){
            b.erase(s2[i]);
                        }
            i++;
        }
        if(j - i+1 == n){
            if(a == b){
return true;
            }
        }
        }
        return false;
    }
};