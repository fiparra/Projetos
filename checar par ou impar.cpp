#include <stdio.h>

int main(void)
{
    int inicio, fim, contador;
    int q_pares = 0;
            printf("\n Digite o numero inicial\n");
    scanf ("%d",&inicio);

    printf("\n Digite o numero final\n");
    scanf ("%d",&fim);
    
    for (contador = inicio; contador <= fim; contador++) {
        if(contador%2 == 0) {
            printf ("O numero %d e PAR!\n", contador);
            q_pares++;
        } else {
            printf("O numero %d e IMPAR!\n", contador);

        }
    }
    printf("A quantidade numeros pares e %d\n", q_pares);
    return(0);}