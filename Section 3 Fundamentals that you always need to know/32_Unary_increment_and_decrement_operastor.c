#include <stdio.h> 

/*

++                           --
                              
int a = 5;                   int x = 10 
a++; // a = a + 1            x--;   // x = x  - 1  

a++; // post increment 
++a // pre increment 



int a = 5, i;
i = ++a;                     i =  a++;

i = 6, a = 6                 i = 5, a = 6
                              
a = a + 1;                   i = a ;
i = a;                       a = a + 1;  




*/


int main(){

printf("********Exemplul 1*********\n\n"); 

 int a = 5,b = 5,j, i;
 
 i = ++a; 
           // example of preincrement , a will be 
           //incremented by 1 first then the incremented value
           // will be assigned to i 
j = b++;   // example of post-increment, a will be assigned to i
           // first and then it will be incremented .

 printf("a = %d,  i = %d\n" , a, i);
 printf("b = %d,  j = %d\n\n" , b, j);

printf("*******Exemplu 2 ********\n\n");

int d = 5, e = 6, l;

l = ++d * ++e; 

printf("d = %d, e = %d, l = %d\n\n", d,e,l);

printf("*******Exemplu 3**********\n\n");

int o = 5;
printf("o = %d\n", o++); //  o = 5
printf("o = %d\n", o);   //  o = 6
printf("o = %d\n", ++o); //  o = 7

 return 0;
}


