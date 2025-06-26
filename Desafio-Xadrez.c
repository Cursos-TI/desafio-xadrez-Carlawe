#include <stdio.h>
int main(){

int bispo = 0;
int rainha = 0;
int cavalo = 0;

                        //Torre: Andar 5 casas pra frente.


for( int torre = 0 ;  torre < 5; torre++){ // enquanto torre for menor que 5 acrescente 1.
   printf("Direita\n");
      
}

   printf("\n");
 

                       // Bispo: Andar 5 casas na diagonal pra direita.
 while (bispo < 5)  //Enquanto bispo for menor que 5, acrescente 1.
{
   printf("Cima direita\n");
     bispo ++;

}
   printf("\n");

                            //Rainha: Andar 8 casas pra esquerda.
do {
   printf("Esquerda\n"); //Imprima esquerda incrementando 1 enquanto rainha for menor que 8.
    rainha++;

}while( rainha < 8);
    
     printf("\n");

                            //Movimento do cavalo
for (int cavalo = 0; cavalo < 2; cavalo++){  //enquanto cavalo for menor que 2, acresente 1 passo.
    printf("Baixo\n");                       //imprima baixo duas vezes


}do {
    printf("Esquerda\n"); //imprima esquerda enquanto cavalo for menor que 1.
    cavalo++;
}while( cavalo < 1);
      
return 0;


}