#include <stdio.h>
#include <stdlib.h>

typedef struct grafo{
    int **adj;  // MATRIZ DE ADJACENCIA
    int n;      // QTDE DE VERTICES
}grafo;

grafo *cria_grafo(int n) {
    grafo *g = malloc(sizeof(grafo));
    g->n = n;
    g->adj = malloc(sizeof(int *));
    for (int i = 0; i < n; i++) g->adj[i] = calloc(n,sizeof(int));
    return g;
}

void insere_aresta(grafo *g, int u, int v) { 
    g->adj[u][v] = 1;
}                

void remove_aresta(grafo *g, int u, int v) { g->adj[u][v] = 0; }

int tem_aresta(grafo *g, int u, int v) { return g->adj[u][v]; }

int main(){
    grafo *nine = cria_grafo(9);
    insere_aresta(nine,1,2);

    insere_aresta(nine,2,3);

    insere_aresta(nine,4,5);

    insere_aresta(nine,5,6);

    insere_aresta(nine,7,8);

    insere_aresta(nine,8,9);

    int A,B;
    scanf("%d %d", &A, &B);
    if(tem_aresta(nine,A,B) == 1) printf("Yes\n");
    else printf("No\n");
}