class Solution {
    public int minInsertions(String s) {
        int count = 0;
        int need = 0;
        for(char ch: s.toCharArray()){
            if(ch == '('){
                need += 2;
                if(need %2 == 1){
                    count++;
                    need--;
                }
            }
            else{
                need--;
                if(need < 0){
                    count++;
                    need = 1;
                }
            }
        }
        return need+ count;
    }
}