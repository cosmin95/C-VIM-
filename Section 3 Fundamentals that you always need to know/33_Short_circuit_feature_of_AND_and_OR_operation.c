#include <stdio.h> 


int  main(){
 
 int a = 5, b = 10, c;
 
 c = ++a || ++b;

// a = 0   
 
 printf("a = %d, b = %d, c = %d\n",  a, b, c);
 
 return 0;
}
