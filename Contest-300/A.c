#include<stdio.h>


int main(){
    int N,A,B;

    scanf("%d %d %d",&N,&A,&B);

    int C[N];
    int value;

    for(int i = 0; i<N; i++){
        scanf("%d",&value);
        C[i] = value;

        if(A+B == value){
            printf("%d\n",i+1);
        }
    }
    
}
