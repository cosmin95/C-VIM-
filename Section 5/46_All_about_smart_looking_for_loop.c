#include <stdio.h>

int main(){
    printf("************Exemplul 1************\n");
    int i;
    for(i = 1,printf("Hi\n"); i<=10; i++,printf("Dave\n")){
        printf("\nHello World\n");
    }

    printf("\n************Exemplul 2************\n");
    int sum,n,a;
    printf("Enter n: ");
    scanf("%d", &n);
    sum = 0;
    for(a = 1;  a<=n ; a++){
        sum = sum + a;
    
    }

    printf("The sum number :%d\n ",sum);
    return 0;
}
