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
void moverBispo(int casas){
      if (casas >  0){              //caso base
        printf("Cima, direita\n");  
        moverBispo (casas - 1);     
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

    int cavalo = 0;         
    
                          //Movimento do cavalo

  while (cavalo < 1){
      for (int cavalo = 0; cavalo < 2; cavalo++){ //enquanto cavalo for menor que 2, acresente 1 passo.
            printf("Cima\n");  //imprima cima duas vezes
             }
     
             printf("Direita\n"); //imprima direita enquanto cavalo for menor que 1.
             cavalo++;
      
            } 
    
    return 0;

}

