int countDigits(int num) {
  int a,add=0;
  int temp = num;
  while(temp !=0){
    a = temp %10;

  if(num%a == 0){
  add++;
 }
 temp = temp /10;
  }  

return add;
}