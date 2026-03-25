class Solution {
    public String longestCommonPrefix(String[] strs) {
            int n = strs.length;
        if(strs == null || n == 0){
            return "";
        }
    String a = strs[0];
        for(int i = 1;i<n;i++){
            while(strs[i].indexOf(a) != 0){
        a = a.substring(0,a.length() - 1);
            if(a.isEmpty()){
                return "";
            }
        }
    }
        return a;
    }
}