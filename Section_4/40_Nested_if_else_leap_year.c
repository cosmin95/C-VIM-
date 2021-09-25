#include <stdio.h>


int main(){
    printf("***************Exemplu 1*************** \n\n");
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    if(year % 4 == 0){
        if(year % 100 == 0){
            if(year % 400 == 0){
             printf("Yes, the year is leap year\n");
    }else{
           printf("No this is not a leap year\n");
         }
}else{
       printf("Yes, the year is leap year\n");
     } 
                     }

else {
    printf("No this is not a leap year\n");
        }

    printf("**************Exemplu  2*************** \n\n");
    int year_1;
    printf("Enter the year_1: ");
    scanf("%d", &year_1);
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
    printf("Yes, is the leap year");
 }else {
    printf("No, no leap year");
}


    return 0;
}
