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



struct No* inserir(struct No* raiz, const int* valor) {
    if (raiz == NULL)
        return criar_no(valor);
    if (*valor < raiz->dados)
        raiz->esquerda = inserir(raiz->esquerda, valor);
    else if (*valor > raiz->dados)
        raiz->direita = inserir(raiz->direita, valor);
    return raiz;
}



int buscar(struct No* raiz, const int* key){
    if (raiz == NULL)
    {
        return 0;
    }

        if (*key == raiz->dados)
            return 1;
        else if (*key < raiz->dados)
            return buscar(raiz->esquerda, key);
        else
            return buscar(raiz->direita , key);

        // O algoritmo segue a lógica da inserção: se o valor é menor, buscamos à esquerda.
        // Se maior, à direita. Quando encontramos, retornamos 1; caso contrário, 0.
        
}

void preOrdem(struct No* raiz){
    if (raiz != NULL)
    {
        printf("-%d- \n", raiz->dados);
        preOrdem(raiz->esquerda);
        preOrdem(raiz->direita);
    }
    
}


void emOrdem(struct No* raiz){
    if (raiz != NULL)
    {
        emOrdem(raiz->esquerda);
        printf("-%d- \n", raiz->dados);
        emOrdem(raiz->direita);
    }
    
}


/**
 * Essa proxima funçao e a msi importante onde nao pode haver esqueciemnto pois m c isso e liberdade
 * e ao esquece essa funçao pode haver estouro d memoria a funçao liberar com o free para liberar
 * todos os espaços alocados com malloc
 */

 void liberar(struct No* raiz){
    if (raiz != NULL)
    {
        liberar(raiz->esquerda); // Liberando espacos em meoria ara no esquerdo e para o direito 

        liberar(raiz->direita);
        free(raiz);
    }
    
 }


 int main(){
    struct No* raiz = NULL;
    
    int valores[] = {50,20,80,40,12,13,11};
    int buscar_chave = 12;

    for ( int i = 0; i < 7; i++)
    {
        raiz = inserir(raiz, &valores[i]);
    }

    printf("Em ordem\n");
    emOrdem(raiz);
    
    printf("\n");

    printf("Pre ordem\n");
    preOrdem(raiz);

    printf("\nBuscar chave %d: %s\n", buscar_chave,  buscar(raiz, &buscar_chave)? "Encontrado":"Nao encontrado");
    
    liberar(raiz);

    return 0;
 }