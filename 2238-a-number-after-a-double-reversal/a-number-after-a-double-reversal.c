bool isSameAfterReversals(int num) {
    int a,b,result = 0,final = 0;
    int temp = num;
    while(temp !=0){
        a = temp%10;
        result = result*10 + a;
        temp = temp/10;
    }
    int temp2 = result;
    while(temp2 !=0){
        b = temp2%10;
        final = final*10 + b;
        temp2 = temp2/10;
    }
    if(final == num)
    return true;
    else
    return false;
}