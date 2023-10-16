#include<stdio.h>
#include<stdlib.h>
#include"grafo.c"


int main () {
  grafo *G = (grafo *)calloc(tam , sizeof (grafo));

criarAresta (G, 0, 1);
criarAresta (G, 1, 2);
criarAresta (G, 1, 3);
criarAresta (G, 1, 4);
criarAresta (G, 2, 8);
criarAresta (G, 2, 7);
criarAresta (G, 2, 4);
criarAresta (G, 3, 4);
criarAresta (G, 3, 5);
criarAresta (G, 3, 6);
criarAresta (G, 4, 7);
criarAresta (G, 4, 5);
criarAresta (G, 5, 6);
criarAresta (G, 7, 8);

 Arquivo(G);    
 
 return 0;
}
