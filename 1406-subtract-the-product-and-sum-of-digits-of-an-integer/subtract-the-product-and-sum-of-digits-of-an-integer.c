int subtractProductAndSum(int n) {
    int a,sum = 0,product = 1,ans;
    while(n!=0){
a = n%10;
sum += a;
product *= a;
n = n/10;
    }
ans = product - sum;
return ans;
}