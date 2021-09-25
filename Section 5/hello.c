#include <stdio.h>

int main(){
    int d;
    int i,j;

    printf("Enter how mani lines: ");
    scanf("%d", &d);
        for(i = 1;i <= d ; i++){
             for(j = 1;j <= i; j++){
                 printf("%d",i,j);
                     }
             printf("\n");
        }
    return 0;
}
