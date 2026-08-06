class Solution {
    public int compress(char[] chars) {
        int n = chars.length;
        int count = 0;
        int index = 0;

        for(int i = 0;i<n;i++){
                    count++;
                   if(i+1 == n || chars[i] != chars[i+1]){
                    chars[index++] = chars[i];
                   if(count != 1){
                    for(char c:Integer.toString(count).toCharArray()){
                        chars[index++] = c;
                    }
                   }
                                      count = 0;
                   }
                }
return index;
                }
            }