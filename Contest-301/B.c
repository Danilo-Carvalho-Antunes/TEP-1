#include<stdio.h>

int main(){
int N,number;
scanf("%d",&N);
int M[N];


for(int i = 0; i<N;i++){
    scanf("%d",&number);
    M[i] = number;
}

for(int i = 0; i<N;i++){
    printf("%d ",M[i]);
    if(i == N-1) break;   
    if(M[i] - M[i+1] > 1){
        for(int j = M[i]-1; j >M[i+1]; j--){
            printf("%d ",j);
        }
        continue;
    } 
    else if(M[i+1] - M[i] > 1){
        for(int j = M[i]+1; j <M[i+1]; j++){
            printf("%d ",j);
        } 
        continue;
    }

}
printf("\n");

}
