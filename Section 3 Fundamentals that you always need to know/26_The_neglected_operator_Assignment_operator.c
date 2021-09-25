# include <stdio.h>
/*
int a;
a = 10;
|    |
|    |
|    |___rvalue

lvalue


int k;
10 = k;------- //illegal

*/

int main(){
  int x;
  // The following line will not compile
  
  10 = x;
  printf("x = %d\n", x);
   
  return 0;
}
