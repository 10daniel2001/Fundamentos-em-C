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

void criando(struct No* proximo){
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


    struct No* atual = primeiro;

    while (atual != NULL)
    {
        printf("Dados - %d\n", atual->dados);
        atual = atual->proximo;
    }
    

    
}


int main(){
    struct No lk;

    criando(&lk);
}
