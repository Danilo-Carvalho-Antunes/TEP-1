#include <stdio.h>
#include <stdlib.h>

typedef struct people
{
    int age;
    char nome[11];
}people;


int main(){
    int N;
    scanf("%d",&N);
    people lista[N];
    int menor_idade = 1000000000;
    int indice = 0;

    for(int i = 0; i<N; i++){
        scanf("%s %d",lista[i].nome,&lista[i].age);
        if(menor_idade > lista[i].age){ 
            menor_idade = lista[i].age;
            indice = i;
        }
    }
    for(int i = 0; i<N; i++){
        if(indice == N) indice = 0;
        printf("%s\n",lista[indice].nome);
        indice++;
    }

}