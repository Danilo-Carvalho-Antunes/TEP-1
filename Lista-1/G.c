#include <stdio.h>
#include <stdlib.h>

int hash(int chave){
    return chave%7;
}


int main() {
    int s;
    
    int *count = calloc(7,sizeof(int));
    int vector[5];
    int soma= 0;
    for (int i = 0; i < 4 ;i++){
        scanf("%d", &s);
        printf("O s%d = %d\n",i,s);
        vector[i] = s;
        count[hash(s)]++;
        printf("O numero de repetições é = %d\n",count[hash(s)]);
        
    }
    
    for (int i = 0; i < 4 ;i++){       
        printf("%d\n",count[i]);
    }



    return 0;
}