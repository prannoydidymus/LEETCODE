class Solution {
    public static String reverseString(String s) {
        // code here
        int n = s.length();
        String r = "";
        for(int i = 0;i<n;i++){
            r = s.charAt(i) + r;
    }
    return r;
}
}