#ifndef ESTRU_H
#define ESTRU_H
/**
 * Arquivo de cabeçalho em c para manter o programa facil de manter e organizado
 * .............................................................................
 * começando com uma contante global com ovalor de 10 ela define o tamanho da fila
 * A struct pessoas tem como atributos de uma pessoas como nome e idade
 * 
 * A struct Fila e a base de tudo ela define o enfileiramento contem o inicio da fila e o total e o fim
 * Abaixo esta as entrada das funçoes para reutilizar no arquivo .c do progrma que vai conter um main.c tbm
 * 
 */
#define TAMANHO 10

typedef struct Pessoas {
    char nome[50];
    int idade;
} Pessoas;

typedef struct Fila {
    Pessoas dados[TAMANHO];
    //dados e um vetor para Pessoas 

    int inicio;
    int fim;
    int total;
} Fila;

void inicializar(Fila* f);
int fila_vazia(Fila* f);
int fila_cheia(Fila* f);
void enfileirar(Fila* f, Pessoas p);
void desenfileirar(Fila* f, Pessoas* p);
void imprimir(Fila* f);

#endif