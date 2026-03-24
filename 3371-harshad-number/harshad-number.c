int sumOfTheDigitsOfHarshadNumber(int x) {
    int a,sum  =0;
    int temp = x;
    while(x!=0){
        a = x%10;
        sum = sum +a;
        x = x/10;
    }
    x= temp;
    if(x%sum != 0){
        return -1;
    }
    else
    return sum;
}