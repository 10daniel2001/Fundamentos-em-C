BUBBLE SORT

Algoritmo de ordenação que compara elementos vizinhos e os troca de lugar até o vetor ficar ordenado. A cada passagem, o maior elemento "sobe" para o final — como uma bolha.
Como funciona

O loop externo controla quantas passagens são feitas. O loop interno compara pares adjacentes e troca quando necessário. Se uma passagem inteira não gerar nenhuma troca, o vetor já está ordenado e o algoritmo para mais cedo.
Complexidade Big O

CasoComplexidadeMelhor casoO(n) — vetor já ordenado, para na 1ª passagemCaso médioO(n²)Pior casoO(n²) — vetor invertidoEspaçoO(1) — sem vetor auxiliar
Bug no código

comparaçoes e incremento não foram inicializadas com zero. Em C, variável local sem inicialização tem lixo de memória. Corrija assim:
cint comparaçoes = 0, incremento = 0;

Quando usar

Bom para vetores pequenos e para estudar complexidade. Evite para conjuntos grandes — quadrático é lento.

+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++