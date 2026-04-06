class Solution {
    public boolean isPalindrome(String s) {
        StringBuilder a = new StringBuilder();
        for(char i:s.toCharArray()){
            if(Character.isLetter(i) || Character.isDigit(i)){
                a.append(Character.toLowerCase(i));
            }
        } 
        String temp = a.toString();
        int left = 0;
        int right = temp.length() - 1;
        while(left <= right){
            if(temp.charAt(left)!=temp.charAt(right)){
                return false;
            }
            left++;
            right--;
        }
        return true;

    }
}