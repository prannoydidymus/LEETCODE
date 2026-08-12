class Solution {
    public String reverseOnlyLetters(String s) {
        char[] str = s.toCharArray();
        int start = 0;
        int end = str.length - 1;
        while (start < end){
if(Character.isLetter(str[start])){
    if(Character.isLetter(str[end])){
char temp = str[end];
str[end] = str[start];
str[start] = temp;
start++;
end--;
    }
    else{
        end--;
    }
}
else{
    start++;
}
        }    
        String res = new String(str);
return res;
    }
}