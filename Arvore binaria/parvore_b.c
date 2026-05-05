/**********************************************************************
 * iniciando a implementançao do codigo de árvore bánaria de busca, com dados inteiros
 * ao inicio foi incluido duas bibliotecas, stdlib para io entrada e saida de dados no terminal
 * e stdlib para ultilizaçao de mallc calloc e realloc e free
 * malloc alocar um espaço em memoria sem inicializar
 * calloc faz o memso que malloc so que inicializa com 0
 * realloc para reallocar um espaço dinamico 
 * free o mais importante, para liberar a memoria apos o uso!
 * 
 * IMPORTANTE NESTE CODIGO IREI USAR SOMENTE FREE ,E MALLOC E PONTEIROS
 * PONTEIROS - para acessar um endereco de memoria
 */

#include <stdio.h>
#include <stdlib.h>

   struct No{
    // aqui veremos um ponteiro No* para esquerda e direita, e uma variavel dados do tipo inteiro
    // essa estrutura e a base da árvore como uma raiz com suas folhas e seus galhos 
    int dados;
    struct No* direita;
    struct No* esquerda;
};

/***
 * Aqui veremos a funçao da estruct No que retorna o novo valor
 * com um parametro e uma passagem por referençia, uma const inteira com nome valor,
 * sera aramzenada em novo dados
 * 
 * um if else para verifica se a memoria foi alocada corretamente, evitando erros
 */


struct No* criar_no(const int* valor){
    struct No* novo = (struct No*) malloc(sizeof(struct No));

    if (novo == NULL)
    {
        fprintf(stderr, "Erro ao alocar a memoria. \n");
        return NULL;
    }
    

    novo->dados = *valor;
    novo->esquerda = NULL;
    novo->direita = NULL;
    return novo;
}


int buscar(struct No* raiz, const int* key){
    if (raiz == NULL)
    {
        return 0;
    }

        if ((key, raiz->dados) == 0)
            return 1;
        else if (key, raiz->dados < 0)
            return buscar(raiz->esquerda, key);
        else
            return buscar(raiz->direita, key);

        // O algoritmo segue a lógica da inserção: se o valor é menor, buscamos à esquerda.
        // Se maior, à direita. Quando encontramos, retornamos 1; caso contrário, 0.
        
}
