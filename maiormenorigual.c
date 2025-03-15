# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main(){
    int numjogador, numpc, resultado;
    int comparacao;
// Gerando numero aleatório

srand(time(0));
numpc = rand() % 10 + 1; // Números de 1 a 10
    // Inicio do jogo
    printf("#### BEM VINDO O JOGO MAIOR, MENOR OU IGUAL #### - Wadson Brito\n");
    printf("Digite um número (entre 1 e 10): ");
    scanf("%d", &numjogador);
    printf("Escolha a comparação:\n");
    printf("1. Maior\n");
    printf("2. Menor\n");
    printf("3. Igual\n");
    scanf("%d", &comparacao);
             
    switch (comparacao)
    {
    case 1:
        printf("### VOCÊ ESCOLHEU A OPÇÃO MAIOR ###\n");
        resultado = numjogador > numpc ? 1 : 0;
        if(resultado == 1){
            printf("########## PARABÉNS VOCÊ GANHOU! ##########\n");
        } else {
            printf("########## INFELIZMENTE VOCÊ PERDEU, TENTE NOVAMENTE ##########\n");
        }
        break;
    case 2:
        printf("### VOCÊ ESCOLHEU A OPÇÃO MENOR ###\n");
        resultado = numpc < numjogador ? 1 : 0;
        if(resultado == 1){
            printf("########## PARABÉNS VOCÊ GANHOU! ##########\n");
        } else {
            printf("########## INFELIZMENTE VOCÊ PERDEU, TENTE NOVAMENTE ##########\n");
        }
        break;
    case 3:
        printf("### VOCÊ ESCOLHEU A OPÇÃO IGUAL ###\n");
        resultado = numjogador == numpc ? 1 : 0;
        if(resultado == 1){
            printf("########## PARABÉNS VOCÊ GANHOU! ##########\n");
        } else {
            printf("########## INFELIZMENTE VOCÊ PERDEU, TENTE NOVAMENTE ##########\n");
        }
         break;
    default:
        printf("### OPÇÃO INVALIDA ###\n");
        break;
    }
    
  //printf("Digite um número (entre 1 e 10): \n");
  //scanf("%d", &numjogador);
       /* if(resultado == 1){
            printf("########## PARABÉNS VOCÊ GANHOU! ##########\n");
        } else {
            printf("########## INFELIZMENTE VOCÊ PERDEU, TENTE NOVAMENTE ##########\n");
        }*/
    //Exibição numero jogador e numero Computador   
    printf("Número do Jogador: %d e Número do Computador: %d\n", numjogador, numpc);
return 0;

}
