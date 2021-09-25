#include <stdio.h>

/*
 
i= 1;                                                     
do {                                                    
    printf("hello world");                                    
    i++;
}while(i = 10);


i  = 1;
while (i <= 10){
printf("hello world");
i++;
}

 */




int main(){
    printf("**********Exemplul1**********\n");
    int i;
    i = 1;
    do  {
        printf("Hello World\n");
        i++;
    }while(i <= 3);

    printf("\n**********Exemplu2***********\n");

    int age ;
    char response;

    do{
        printf("Enter age : ");
        scanf("%d", &age);

        if(age >= 13 && age <=19){
            printf("Teem age\n");
        }else{
            printf("Not teen age\n");
        }
        printf("Do you want to continue :  (y/n) ");
        scanf(" %c", &response);
    }while(response == 'y'|| response == 'Y');
    return 0;
}
