#ifndef GRAFO_H_INCLUDED
#define GRAFO_H_INCLUDED

#define tam 15 

typedef struct Grafo { 
    int vertices;
    int arestas [tam][tam];
}grafo;

int tamanho (int a, int b);

void criarAresta (grafo *g, int x, int y);

void Arquivo(grafo *g);

#endif
