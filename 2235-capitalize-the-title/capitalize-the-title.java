class Solution {
    public String capitalizeTitle(String title) {
       char[] charar = title.toCharArray();
       int len = charar.length;
       for(int i = 0;i<len;i++){
         int first = i;
         while(i < len && charar[i] != ' '){
         charar[i] = Character.toLowerCase(charar[i]);
         i++;
         }
         if(i - first > 2){
            charar[first] = Character.toUpperCase(charar[first]);
         }
       } 
       return String.valueOf(charar);
    }
}