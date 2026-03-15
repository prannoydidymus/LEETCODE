int lengthOfLastWord(char* s) {
    int index = 0,n = strlen(s);
    bool space = false;

    for(int i = n-1;i>=0;i--){
        if(s[i] != ' '){
            index++;
            space = true;
        }
        else if(space)
            break;
    }
        return index;
    
}
