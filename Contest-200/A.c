#include<stdio.h>

int main() {
    int A, B, C;
    scanf("%d %d %d",&A, &B, &C);
    int value;
    int print = 0;


    for(int i = 2; i < 1000 ; i++ ){
        value = i * C;
        if (value >= 1000){
            break;
        }

        if(value > A && B > value ){
            printf("%d\n",value);
            print++;
            break;
        }
        if(value > B && A > value){
            printf("%d\n",value);
            print++;
            break;
        }
    }

    if(print == 0){
        printf("-1\n");
    }
        
}