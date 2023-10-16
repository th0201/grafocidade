#include <stdio.h>
#include <stdlib.h>

int tamanho (int a, int b) {
    if (a > b) { 
      return a;
    }
    if (b > a) {
      return b;
    }
      return 0;
}

void criarAresta (grafo *g, int x, int y) {
    if (x > g->vertices || y > g->vertices) {
      g->vertices = tamanho(x,y);
    }
      g->arestas [x][y] = 1;
      g->arestas [y][x] = 1;
}

void Arquivo(grafo *g){
  int x, y;
  FILE* arq=fopen("arquivo.txt","w");
  fprintf(arq, "vertices: 15; Arestas: 14\n");
  fprintf(arq, "0-ma 1-pi 2-ce 3-ba 4-pe 5-al 6-se 7-pb 8-rn\n");
  for (x = 0; x <= g->vertices ; x++)
  {
    for(y=0;y <= g->vertices; y++){
        if (g->arestas[x][y]==1)
        {
          fprintf(arq, "(%d, %d)\n", x, y);
          g->arestas[y][x] = 0;
        }
    }
  }
  
  fclose(arq);
}
