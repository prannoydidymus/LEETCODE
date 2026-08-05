class Solution {
    public String reverseWords(String s) {
        StringBuilder res = new StringBuilder();
        int n = s.length(),i = 0;
        while(i<n){
            while(i<n && s.charAt(i) == ' ') i++;
            if(i>= n) break;
            int j = i+1;
            while(j < n && s.charAt(j) != ' ') j++;
            String sub = s.substring(i,j);
            if(res.length() == 0){
                res.append(sub);
            }
            else{
                res.insert(0,sub+" ");
            }
            i = j+ 1;
        }
        return res.toString();
    }
}