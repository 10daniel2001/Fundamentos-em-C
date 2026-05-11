#include <stdio.h>
#include <string.h>
#include "estru.h"


int main(){
    Fila f;
    Pessoas p;


    inicializar(&f);

    Pessoas p1 = {"Carlos __Primeiro", 24};
    Pessoas p2 = {"Daniel __Segundo", 25};
    Pessoas p3 = {"Andre __Terceiro", 45};
    Pessoas p4 = {"Marcos __Quarto", 34};
    Pessoas p5 = {"Manuel __Quinto", 33};

    printf("Enfileirando\n");
    enfileirar(&f, p1);
    enfileirar(&f, p2);
    enfileirar(&f, p3);
    enfileirar(&f, p4);
    enfileirar(&f, p5);

    emprimir(&f);


}
