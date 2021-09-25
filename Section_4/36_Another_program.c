#include <stdio.h>

int main(){
    double income, tax;
    printf("Printf your income; ");
    scanf("%lf",&income);

    if (income  < 10000)
    {
        tax = 0.0;
    }else if(income >= 10000 && income < 20000){
        tax  = income *  .1;
    }else if(income >= 20000 && income < 50000){
        tax = income * .2;
    }else{
        tax = income * .25;
        tax = tax + tax * .1;
    }

    printf("The tax is %.2lf",tax);
    
    
    return 0;
}
