#include <stdio.h>

int main(){

    int i;
    char response;
    for(i = 1 ; i <= 100; i++){
        printf("Count = %d\n", i);
        printf("printf next? enter Y/y to continue any other key to terminate ");
        scanf(" %c", &response);
        if(response != 'Y' && response != 'y'){
            break;
        }
    }
    printf("Terminated at count = %d\n",i);
    return 0;
}
