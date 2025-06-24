#include <stdio.h>
int main(){

int bispo = 0;
int rainha = 0;

                        //Torre: Andar 5 casas pra frente.


for( int torre = 0 ;  torre < 5; torre++){ // enquanto torre for menor que 5 acrescente 1.
   printf("Direita\n");
      
}

   printf("\n");
 

                       // Bispo: Andar 5 casas na diagonal pra direita.
 while (bispo < 5)  //Enquanto bispo for menor que 5, acrescente 1.
{
   printf("Frente, direita\n");
     bispo ++;

}
   printf("\n");

                            //Rainha: Andar 8 casas pra esquerda.
do {
   printf("Esquerda\n"); //Imprima esquerda incrementando 1 enquanto rainha for menor que 8.
    rainha++;

}while( rainha < 8);
      
return 0;


}