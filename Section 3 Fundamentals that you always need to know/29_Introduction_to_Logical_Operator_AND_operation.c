#include <stdio.h>
/*


&&     ||      !

AND    OR      NOT


cond1  &&   cond 2    result 
 1            0         0 
 0            1         0
 0            0         0
 1            1         1 

*/

int main(){
    int i, age; 
    age = 25;
    i = age >=13  && age <= 19;
    printf("i = %d\n", i);
   // return 0;
     
    return 0;
}


