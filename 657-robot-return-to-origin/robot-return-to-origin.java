class Solution {
    public boolean judgeCircle(String moves) {
       int  x=0,y=0;
       for(int i = 0;i<moves.length();i++){
        char n = moves.charAt(i);
if(n=='R'){
    x++;
}
if(n=='L'){
    x--;
}
if(n=='U'){
    y++;
}
if(n=='D'){
    y--;
}
       } 
       if(x == 0 && y== 0){
        return true;
       }
       else
       return false;
    }
}