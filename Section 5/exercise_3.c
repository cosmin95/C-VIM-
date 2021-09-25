#include <stdio.h>

int main(){
    //primul exemplu
    int n;   //line number
    int i,j; // i = line number, j = columns number in the line 
    
    printf("Enter how many lines: ");
    scanf("%d", &n);

    for(i = 1; i <=n; i++){
        for(j = 1; j <= i; j++){
            printf("*");
        }
    printf("\n");
    }
    printf("\n\n*************Exemplu2**********\n");
    int a;
    int b,c;

    printf("Enter how many lines: ");
    scanf("%d", &a);
    for(b = 1 ;b<=a ; b++){
        for(c= a;c>=b ;c--){
            printf("*");
        }
        printf("\n");
    }
    printf("\n***************Exemplul 3*******************\n");
    int d;
    int e,f;
    int g,h;

    printf("Enter how many lines:");
    scanf("%d", &d);

    for(e = 1; e <= d; e++){
        for(f = 1; f <= e; f++){
            printf("*");
        }
        printf("\n");
    }

    for(g = 1; g <= d; g++){
        for(h = d; h >= g; h--){
            printf("*");
        }
        printf("\n");
    }

    printf("\n************Exemplul 4******************\n");
    int k;
    int l,m;

    printf("Enter how mani lines: ");
    scanf("%d", &k);
        for(l = 1;l <= k ; l++){
             for(m = 1;m <= l; m++){
                 printf("%d",l);
                     }
             printf("\n\n");
        }
    printf("\n*********Exemplu 5 ********************\n");
    int o;
    int p,q;

    printf("Enter how many lines: ");
    scanf("%d", &o);

    for(p = 1;p <= o; p++ ){
         for(q = 1; q <= p; q++){
             printf("%d",q);
          }
         printf("\n");
    }
    printf("\n************Exemplu 6 ****************\n");
    int r;
    int s,t;
    printf("Enter how many line: ");
    scanf("%d", &r);
        for(s = 1; s <= r; s++){
         for(t = 1;t <= s; t++ ){
             printf("%d",(s + t)% 2);
              }
         printf("\n");
        }
    return 0;
    
    }

