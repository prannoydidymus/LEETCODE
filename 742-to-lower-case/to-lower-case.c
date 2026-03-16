char* toLowerCase(char* s) {
    int len = strlen(s);
    for(int i=0;i<len;i++){
        if(65<=s[i] && s[i]<=90){
            s[i]= s[i]+32;
        }
    }
    return s;
}