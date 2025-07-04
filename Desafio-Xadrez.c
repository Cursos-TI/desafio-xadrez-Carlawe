#include <stdio.h>
              //Recursividade


              //Movimento da torre
 void moverTorre(int casas){
     if(casas > 0){             // Caso base
     printf ("Direita\n");
     moverTorre( casas - 1);    
     }
   }
     
   
              //Movimento do Bispo
 void moverBispo(int casas ){
    while ( casas > 0){
        for( int casas = 0; casas  < 1; casas++ ){
          printf("Cima\n");
        }
        printf("Direita\n");
        casas--;
      }
    }
  
     
  
             // Movimento da Rainha
void moverRainha(int casas) {
    if( casas > 0){             //Caso base
      printf("Esquerda\n");
      moverRainha (casas - 1);
    }
  }


int main(){

    moverTorre(5);   // Quantidade de vezes que a torre vai se mover
    printf("\n");    // pular linha
    moverBispo(5);   // quantidade de vezes que o bispo vai se mover
    printf("\n");    // pular linha
    moverRainha(8);  // Quantidade de vezes que a rainha vai se mover
    printf("\n");    // pular linha

  
                           //Movimento do cavalo

 
   
   int passos = 0;  // criação da variável passos para o loop while
                          
   while (passos < 1){               //enquanto a variável  passos for menor que 1 imprime o codigo todo por uma vez                 
                                 
       for (int cavalo = 0; cavalo < 2; cavalo++){     //imprimir cima duas vezes enquanto  a variável cavalo for menor que dois incrementando 1.                          
        
        printf("Cima\n");
        }
         printf("Direita\n");  
        passos++;
        }
    
  return 0;
} 
            