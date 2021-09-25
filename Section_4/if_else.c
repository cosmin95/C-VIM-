#include <stdio.h>

int main(){
   printf("*******Exemplu 1*******\n");
   int a, b, max;   
   printf("Enter first  number:  ");
   scanf("%d", &a);
   printf("Enter second number: ");
   scanf("%d", &b);
   
    if(a > b){
      max = a;
   } else{
      max = b;
    }
   printf("The max number is : %d\n\n",max);
   printf("*********Exemplu 2***********\n");
   int age;
   printf("Enter your age: ");
   scanf("%d", &age);
   if (age >=14 && age <= 19)
   {
      printf("Yup! You are teen ager\n");
   } else{
      printf("No, you are not a teen ager !\n");
   }
    
   return 0;
}
