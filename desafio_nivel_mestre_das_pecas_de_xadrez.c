#include <stdio.h>

    //Recursividade da torre
    void torre(int t){
        if (t > 0)
        {
            printf ("Direita\n");
            
            torre(t - 1);
        }
    }
    
    //Recursividade do Bispo
    void bispo(int b){
        
        if (b > 0)
        {
            for (int bis = 0; bis < 1; bis++)
            {
                printf("Cima, ");
                
                for (int po = 0; po < 1; po++)
                {
                    printf("Direita\n");
                }
                
            }
            
            bispo(b - 1);
        }
        
    }

    //Recursividade da rainha
    void rainha(int r){
        if (r > 0)
        {
            printf ("Esquerda\n");
                
            rainha(r - 1);
        }          
    }

    
    int main(){

        //Movimentação da torre
        printf ("***Movimentação da torre***\n");
        
        torre(5);
    
    
        //Movimentação do bispo
        printf ("***Movimentação do bispo***\n");

        bispo(5);
    
    
        //Movimentação da rainha
        printf ("***Movimentação da rainha***\n");

        rainha(8);
    

        //Movimentação do cavalo
        printf ("***Movimentação do cavalo***\n");

        for (int cavalo = 0; cavalo < 1; cavalo++)
        {
            
            for (int i = 0, j = 3; i < j; i++, j--)
            {
                printf ("Cima\n");
            }
            
            printf ("Direita\n");
        }    




    return 0;


    }