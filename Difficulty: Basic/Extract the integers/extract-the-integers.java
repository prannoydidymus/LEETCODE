class Solution {
    public List<String> extractInt(String s) {
        // code here
        ArrayList<String> result = new ArrayList<>();
        StringBuilder num =  new StringBuilder();
        for(char ch: s.toCharArray()){
            if(Character.isDigit(ch)){
                num.append(ch);
            }
            else{
                if(num.length() > 0){
                    result.add(num.toString());
                    num.setLength(0);
                }
            }
        }
        if(num.length() > 0){
            result.add(num.toString());
        }
       if(result.isEmpty()){
           result.add("");
       }
       return result;
    }
}
