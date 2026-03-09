int xorOperation(int n, int start) {
    int ans = 0,c;
for(int i = 0;i<n;i++){

c = start + i*2;
ans = ans^c;
}
return ans ;
}