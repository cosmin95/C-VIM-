#include <stdio.h>

/*

i = !(10 > 5 );  = i = 0
i = !(5 > 10 );  = i = 1 

 c1   ! c1
 0       1
 1       0 


*/

int main(){
  int a = 10, b = 70, i  ;
  i = ! (a > b);
  printf("i = %d\n",i);
  
  return 0;
}
