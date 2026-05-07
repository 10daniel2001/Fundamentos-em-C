/*Nao muito importante, mas ideal para os estudo, bubble sort o algoritmo de ordenaçao 
*nao muito eficiente para uma ordenaçao de grande porte, ideal para pequena ordenaçao 
*ideal tambem para saber a complexidade
*/


#include <stdio.h>

void bubble(int *vetor, int n){
    int i, j, temp;
    int contador, incremento = 0;
    int comparaçoes = 0;

    // variavel I para o primeiro loop for, j para o segund loop for, ou sej ai para o externo e j para interno
    // variavel contador para contar quantas passada o loop externo faz
    // incremento conta a do loop for interno 







    for ( i = 0; i < n -1; i++)
    {
        contador = 0;
     

        for ( j = 0; j < n -1-i; j++)
        {
               comparaçoes++;
            if (vetor[j] > vetor[j + 1] )
            {
                
                temp = vetor[j];
                vetor[j] = vetor[ j+1];
                vetor[j + 1] = temp;
                incremento++;
                contador = 1;
            }
            
        }
        if (!contador)
        {
            break;
        }
        
        
    }
    printf("Numeros de incrementos e %d -  de comparaçoes %d\n", incremento, comparaçoes);
}

int main(){
    int dados[] = {5, 2, 9, 1, 6};
    int n = sizeof(dados) / sizeof(dados[0]);

    bubble(dados, n);

    printf("Vetor ordenado: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", dados[i]);
    }
    return 0;
} 