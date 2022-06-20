/**
* fib -> 0 1 1 2 3 5 8 13
* indice 0 1 2 3 4 5 6 7
**/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void)
{
    int i, n, ant, prox, soma;

    printf("Digite um número para calcular o Fibonacci: ");
        scanf("%d", &n);

    ant=0;
    prox=1;
    soma=0;

    for(i=0; i<10; i++){

        soma=prox+ant;

        ant+prox;
        prox=soma;
    }

    printf("Fibonacci de %d = %d\n", n, ant);

    return 0;
}
