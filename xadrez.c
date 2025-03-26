#include <stdio.h>

int main(){
    
    printf("\n*** Movimentação das Peças de Xadrez ***\n");
    
    /*Nível Novato!
      Torre move-se 5 casas para a direita;
      Bispo move-se 5 casas na diagonal para cima e direita;
      Rainha move-se 8 casas para a esquerda.
    */

    //Movimentação Torre - Usando a estrutura for
 
    printf("Movimentação da Torre 5 casas para direita.\n");

    for (int i = 0; i < 5; i++)
    {
       printf("Casa %d: Direita\n", i + 1);
    }
    
    //Movimentação Bispo - Usando a estrutura while

    printf("Movimentação do Bispo 5 casas na diagonal para cima e a direita\n");

    int i = 0;

    while (i < 5)
    {
        printf("Casa %d: Cima, direita\n", i + 1);
        i++;
    }
    
    //Movimentação Rainha - Usando a estrutura do-while

    printf("Movimentação Rainha oito casas para a esquerda\n");

    i = 0;

    do
    {
        printf("Casa %d: Esquerda\n", i + 1);

        i++;

    } while (i < 8);
    
    
    return 0;
}