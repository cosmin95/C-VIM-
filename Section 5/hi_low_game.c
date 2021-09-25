#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

//******************* To do list *****************
// make condition low
// corect answer 

int main(){
    //--------Declarare variabile-----------
    int MAX_CHANCE = 7;
    int guess_computer;
    int human_answer;
    int chance =0;
    int chance_correct= 1;


    //-------------------------------------
    

    long t;
    t = time(NULL);
    srand(t);
   guess_computer = rand() % 100;
   // printf("%d\n\n",guess_computer);

    while(chance  <= MAX_CHANCE){
       // guess_computer = rand() % 100;
        printf("guess computer = %d\n",guess_computer);
            printf("Human_answer: ");
            scanf(" %d",&human_answer);
            if(human_answer > guess_computer){
                 printf("Too high\n");
                 printf("Chance remaining : %d\n",MAX_CHANCE--);
                 } 
            else if(human_answer < guess_computer){
                printf("To low\n");
                printf("Chance remaining: %d\n",MAX_CHANCE--);
            }
            else if(human_answer == guess_computer){
                printf("Corect answer\n");
                printf("You answer correct in %d \n",chance_correct);
                break;
            }

       // MAX_CHANCE--
       chance_correct++;
         }
       if(chance_correct < 5 ){
           printf("You are the best \n");
       }
    //   printf("Finish game\n ");
    
    return 0;
}
