#include <stdio.h>
#include <stdlib.h>
#include "estru.h"

inicializar(Fila* f){
    f->inicio = 0;
    f->fim = 0;
    f->total = 0;
}

fila_cheia(Fila *f){
    return f->total == TAMANHO;
}
fila_vazia(Fila *f){
    return f->total == 0;
}

enfileirar(Fila* f, Pessoas p){

    if (fila_cheia(f))
    {
        printf("Fila cheia impossivel adiconar");
        return ;
    }

    f->dados[f->fim] = p;
    f->fim = (f->fim + 1) % TAMANHO;
    f->total++;
    
}
desenfileirar(Fila *f, Pessoas *p){
    if (fila_vazia(f))
    {
        printf("Fila ja esta vazia\n");
        return;
    }
    *p = f->dados[f->inicio];
    f->inicio = (f->inicio + 1) % TAMANHO;
    f->total--;
    
}

emprimir(Fila *f){
    printf("Mostrando Fila de pessoas\n");
    for (int i = 0, indice = f->inicio; i < f->total; i++, indice = (indice + 1) % TAMANHO)
    {
        printf("NOME [%s] - IDADE [%d]\n", f->dados[indice].nome, f->dados[indice].idade);
    }
    
}