/*Este codigo educacional e para o metodo de ordenaçao selection sort,
  onde busca o menor elemento no array e coloca no lugar exato nada muito complexo
  
  iniciar com uma funçao onde preciso passar valores por refrencia essa funçao vai se chamar troca
  ela vai fazer a troca exata no array quando necessario*/

#include <stdio.h>

// Funçao de trocar ultilzando ponteiros para referencia

void trocar(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}



// parte onde obtem o percorrimento 
void selection_sort(int vetr[], int n){
    int i , j, idx_mini;

    for ( i = 0; i < n -1; i++)
    {
        idx_mini = i;

        
    }
    
}