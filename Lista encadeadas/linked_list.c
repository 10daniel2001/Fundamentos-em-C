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

struct No* criando(void){
    struct No* primeiro = (struct No*)malloc(sizeof(struct No));
    struct No* segundo = (struct No*)malloc(sizeof(struct No));
    struct No* terceiro = (struct No*)malloc(sizeof(struct No));
    struct No* quarto = (struct No*)malloc(sizeof(struct No));
    struct No* quinto = (struct No*)malloc(sizeof(struct No));

    primeiro->dados = 10;
    primeiro->proximo = segundo;

    segundo->dados = 20;
    segundo->proximo = terceiro;

    terceiro->dados = 30;
    terceiro->proximo = quarto;

    quarto->dados = 40;
    quarto->proximo = quinto;

    quinto->dados = 50;
    quinto->proximo = NULL;


    return primeiro;

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
    struct No* lista = criando();

    struct No* atual = lista;
    while (atual != NULL)
    {
        printf("Dados -> %d`", atual->dados);
        atual = atual->proximo;
    }
    

    liberarLista(lista);
    return 0;
}
