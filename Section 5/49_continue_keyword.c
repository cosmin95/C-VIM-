#include <stdio.h>


int main(){
    int i;
    for(i = 1; i <=100; i++){
        if(i % 2 == 0){
         continue;   
        }
        printf("Count = %d\n", i);
    }
    return 0;
}
