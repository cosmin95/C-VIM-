#include <stdio.h>

/*
n = 25

3 + 6 + 9 + 12 + 18 + 21 + 24

*/

int main (){

    int sum = 0;
    int n = 25;

    while (n >= 0){
       if(n % 3 == 0 && n %  5 != 0){ 
       sum = sum + n ;
       }
       n--;
    }
    printf("Sum is %d \n",sum);
    return 0;
}
