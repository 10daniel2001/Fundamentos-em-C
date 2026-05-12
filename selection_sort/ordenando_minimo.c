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

        for (j = i + 1; j < n; j++)
        {
            if (vetr[j] < vetr[idx_mini])
            {
                idx_mini = j;
            }
            
        }
        if (idx_mini != i)
        {
            trocar(&vetr[i], &vetr[idx_mini]);
        }
        
        
    }
    
}


int main(){

    // vetor original desorganizado
    int vetor[] = {50,6,88,44,8,7};
    int n = sizeof(vetor)/sizeof(vetor[0]);

     
    printf("Vetor original: "); 
    for (int i = 0; i < n; i++) { 
        printf("%d ", vetor[i]); 
    }
    printf("\n"); 
    
    selection_sort(vetor, n); 
 
    printf("Vetor ordenado: "); 
    for (int i = 0; i < n; i++) { 
        printf("%d ", vetor[i]); 
    } 
    
    return 0; 
}