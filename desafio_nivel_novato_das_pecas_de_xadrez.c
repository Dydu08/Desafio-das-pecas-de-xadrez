#include <stdio.h>


    int main(){
        
        //Declaração das variáveis da torre, do bispo e da rainha
        int torre = 1;
        int bispo = 1;
        int rainha;
        
        
        //Torre usando while
        printf ("***Movimentação da torre***\n");
        
        
        while (torre <=5)
        {
            printf ("Direita\n");
            torre++;
        }
        
        
        //Bispo usando do-while
        printf ("***Movimentação do bispo***\n");

        do
        {
            printf ("Cima, direita\n");
            bispo++;
        } while (bispo <=5);
        
        
        //Rainha usando for
        printf ("***Movimentação da rainha***\n");

        for (rainha = 1; rainha <= 8; rainha++)
        {
            printf ("Esquerda\n");
        }
        




            return 0;
    
    
    }