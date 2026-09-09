int climbStairs(int n) {
    int c = 0,b=2,a=1;
    if(n == 2 || n == 1){
        return n;
    }
        for(int i = 3;i<=n;i++){
     c = b+a;
     a = b;
     b = c;
        }
     return c;    
    }