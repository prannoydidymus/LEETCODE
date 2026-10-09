
class Solution {
public:
    int minInsertions(string s) {
        int count = 0;
        int need = 0;

        for (char ch : s) {
            if (ch == '(') {
                need+=2;
                if(need %2 == 1){
                    count++;
                    need--;
                }
            }
            else {
                need--;
                if(need < 0){
                    count++;
                    need = 1;
                }
            }
        }
        return count + need;
    }
};