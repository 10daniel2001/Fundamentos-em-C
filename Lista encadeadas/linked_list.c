/**
 * Lista encadeadas em c, de uma froma basica onde criando um espaço na memoria com o malloc
 * neste arquivo nao vamos usar o .h para modularizar, pois creio que o codigo e simples e facil
 * Sempre ultilizando structs para encapsular dados de froma objetiva
 * lista encadeada diferente de lista lineares, segue um conceito de cada parte esta ligada ao outra,
 * sem neccesariamente esta em forma linear
 * 
 * ...............................................................................................
 * Logo de inicio temos a inclusao das bibliotecas padrao do C
 * stdlib para alocaçao de memoria
 * e  stdio para entrada e saida
 * 
 * Apos e inclusao das bibliotecas temos a estrutura que struct que conte uma variavel inteira
 * e um ponteiro para o proxima no ou dados
 */

 #include <stdio.h>
 #include <stdlib.h>
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

struct No
{
    int dados;
    struct No* proximo;
};

//.................................................................................

struct No* inserir(struct No* cabeca, int valor){
    struct No* novo = (struct No*)malloc(sizeof(struct No));

    novo->dados = valor;
    novo->proximo = cabeca;

    return novo;
}















/**
 * Umas das partes mais importante onde pode haver esqueciemnto, a liberaçao da memoria alocada
 */
void liberarLista(struct No* cabeca) {
    struct No* atual = cabeca;
    struct No* proximo;
    
    while (atual != NULL) {
        proximo = atual->proximo;
        free(atual);
        atual = proximo;
    }
}


int main(){
    struct No* lista = NULL;

    lista = inserir(lista, 50);
    lista = inserir(lista, 40);
    lista = inserir(lista, 30);
    lista = inserir(lista, 20);
    lista = inserir(lista, 10);

    struct No* atual = lista;
    
    while (atual != NULL)
    {
        printf("Dados -> %d`", atual->dados);
        atual = atual->proximo;
    }
    

    liberarLista(lista);
    return 0;
}
