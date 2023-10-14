#include <stdio.h>
#include <stdlib.h>

#define tam 15 

typedef struct Grafo { 
    int vertices;
    int arestas [tam][tam];
}grafo;

int tamanho (int a, int b) {
    if (a > b) { 
      return a;
    }
    if (b > a) {
      return b;
    }
}

void criarAresta (grafo *g, int x, int y) {
    if (x > g->vertices || y > g->vertices) {
      g->vertices = tamanho(x,y);
    }
   
      g->arestas [x][y] = 1;
      g->arestas [y][x] = 1;
}

int main () {
  grafo *G = (grafo *)calloc(tam , sizeof (grafo));; 
  FILE *P = fopen("arq.txt", "w");;
     int c, j,i;
   
  criarAresta (G, 1, 2);

 
    for (c=0; c<=2; c++){
     for(j=0; j<=2;j++)
     printf("%d\n",G->arestas[c][j]);
    }
    
 
}
