int reverse(signed long int x){
signed long int ans = 0,a;
while(x!=0){
    a = x%10;
    ans = ans*10 + a;
    x = x/10;

}
    if(ans < -2147483648 || ans> 2147483648){
        return 0;
    }
return (int)ans;
}