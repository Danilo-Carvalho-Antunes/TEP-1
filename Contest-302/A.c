#include<stdio.h>
int main(){
    unsigned long long A,B,bits,count = 0;
    scanf("%lld %lld",&A,&B);
    count = A/B;
    if(A%B != 0){
        count++;
    }
    printf("%lld\n",count);
}