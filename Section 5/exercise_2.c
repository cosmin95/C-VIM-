#include <stdio.h>

/*

--- MENU ----
1. Find factorial
2. Find a^b
3. Quit
 
What you want to do? 1
Enter number: -1
Invalid number for factorial
 
---- MENU ----
1. Find factorial
2. Find a^b
3. Quit
What you want to do? 1
Enter number: 5
Factorial of 5 is 120
 
---- MENU ----
1. Find factorial
2. Find a^b
3. Quit
 
What you want to do? 20
This program can find factorials only in the range 0 - 10
 
---- MENU ----
1. Find factorial
2. Find a^b
3. Quit
What you want to do? 2
Enter a: 2
Enter b: 5
2^5 = 32.0
 
---- MENU ----
1. Find factorial
2. Find a^b
3. Quit
What you want to do? 5
Invalid menu option
 
---- MENU ----
1. Find factorial
2. Find a^b
3. Quit
What you want to do? 3
 
*** Thank you ***
NOTE: You should use library function pow to find a^b, no need to write code 
for finding a^b.
*/
int  main(){
    //declarare variabile
    int option;
    int number_factorial;




    //----------------------

    while(1){
    printf("\n-------Menu---------\n");
    printf("1. Find factorial\n");
    printf("2. Find a^b\n");
    printf("3. Quit\n");
    printf("What u want to do: ");
    scanf("%d", &option);
     if (option == 1 ){
         printf("Enter a number:");
         scanf("%d", &number_factorial);
            if(number_factorial > 0){
                int i = 1;
                int sum_fact = 1;
                      while(i <= number_factorial){
                        sum_fact = sum_fact * i;
                        i++;
            }
            printf("The factorial number is : %d", sum_fact);
            }else if(number_factorial < 0){
                printf("Invalid number factorial\n");
            }

     }else if(option == 2){
         int a,b;
         printf("Enter a : ");
         scanf("%d", &a);
         printf("Enter b : ");
         scanf("%d", &b);
         int i = 1;
         int sum_power = 1;
         while (i <= b ){
             sum_power = sum_power  * a;
          i++;
        }
        printf("Power number is %d", sum_power);
     }
     else if(option == 3){
         break;
     }else if(option >=3 && option <= 10 ){
        printf("Invalid menu option\n");
    }else if(option > 10){
        printf("This program can find factorials only in the range 0 - 10\n");
    }
    
    }
    return 0;
}
