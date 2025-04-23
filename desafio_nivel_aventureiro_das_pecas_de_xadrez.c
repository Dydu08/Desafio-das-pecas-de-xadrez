#include <stdio.h>


    int main(){
        
        //Declaração das variáveis da torre, do bispo, da rainha e do cavalo (que possui uma variável externa e uma interna aninhadas)
        int torre = 1;
        int bispo = 1;
        int rainha;
        int cavalo, horse;
    
        
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
        

        //Cavalo usando loops aninhado
        printf ("***Movimentação do cavalo***\n");

        for (cavalo = 1; cavalo == 1; cavalo++)
        {
            horse = 1;

            while (horse <= 2)
            {
                printf ("Baixo\n");
                horse++;
            }
            
            printf ("Esquerda\n");
        }
            
        
        
        
        
        
        
        
        return 0;
    
    
    }