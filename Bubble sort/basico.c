/*Nao muito importante, mas ideal para os estudo, bubble sort o algoritmo de ordenaçao 
*nao muito eficiente para uma ordenaçao de grande porte, ideal para pequena ordenaçao 
*ideal tambem para saber a complexidade
*/


#include <stdio.h>

void bubble(int *vetor, int n){
    int i, j, temp;
    int contador, incremento;

    for ( i = 0; i < n -1; i++)
    {
        contador = 0;

        for ( j = 0; j < n -1-i; j++)
        {
            if (vetor[j] < vetor[j + 1] )
            {
                temp = vetor[j];
                vetor[j] = vetor[ j+1];
                vetor[j + 1] = temp;
                contador = 1;
            }
            
        }
        if (!contador)
        {
            break;
        }
        
        
    }
    
}