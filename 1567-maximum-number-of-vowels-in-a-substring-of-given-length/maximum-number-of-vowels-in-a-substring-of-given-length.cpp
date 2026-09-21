class Solution {
public:
    int maxVowels(string s, int k) {
        int count = 0;
        int n = s.size();
        int max = 0;
        int j = 0;
        for(int i = 0;i<k;i++){
            if(s[i]== 'a' || s[i] == 'e' || s[i] =='i' || s[i]== 'o' || s[i]== 'u'){
                count++;
            }

            max = count;
        }
for(int i = k;i<n;i++){
    if(s[i]== 'a' || s[i] == 'e' || s[i] =='i' || s[i]== 'o' || s[i]== 'u'){
                count++;
            }
    if(s[j]== 'a' || s[j] == 'e' || s[j] =='i' || s[j]== 'o' || s[j]== 'u'){
                count--;
            }  
            j++;
            max = std::max(max,count);
}
return max;
    }
};