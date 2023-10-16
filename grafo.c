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

void Arquivo(){
  FILE* arq=fopen("arquivo","w");
  fprintf(arq, "vertices: 15; Arestas: 14\n");
  fprintf(arq, "0-ma 1-pi 2-ce 3-ba 4-pe 5-al 6-se 7-pb 8-rn\n");
  fprintf(arq, "Vertices (0, 1)\n");
  fprintf(arq, "Vertices (1, 2)\n");
  fprintf(arq, "Vertices (1, 3)\n");
  fprintf(arq, "Vertices (1, 4)\n");
  fprintf(arq, "Vertices (2, 8)\n");
  fprintf(arq, "Vertices (2, 7)\n");
  fprintf(arq, "Vertices (2, 4)\n");
  fprintf(arq, "Vertices (3, 4)\n");
  fprintf(arq, "Vertices (3, 5)\n");
  fprintf(arq, "Vertices (3, 6)\n");
  fprintf(arq, "Vertices (4, 5)\n");
  fprintf(arq, "Vertices (4, 7)\n");
  fprintf(arq, "Vertices (5, 6)\n");
  fprintf(arq, "Vertices (7, 8)");
  fclose(arq);
}



int main () {
  grafo *G = (grafo *)calloc(tam , sizeof (grafo));
  
     int c, j;
   printf(" 0-ma\n 1-pi\n 2-ce\n 3-ba\n 4-pe\n 5-al\n 6-se\n 7-pb\n 8-rn\n");
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
      

 
    for (c=0; c<=G->vertices; c++){
     for(j=0; j<=G->vertices;j++){
     printf("%d\n",G->arestas[c][j]);}
    }

  Arquivo();    
 
}
