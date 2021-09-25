#include <stdio.h>

int main(){
    int number , sum;
    sum = 0;
    printf("Enter a positive number ,negative to terminate: ");
    scanf("%d", &number);
    while (number >= 0){
        sum = sum + number;
        printf("Enter a positive number, negative to terminate: ");
        scanf("%d", &number);
    }
        printf("The sum is %d\n", sum);
    return 0;
}
