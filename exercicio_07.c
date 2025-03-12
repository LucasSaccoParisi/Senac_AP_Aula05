#include<iostream>

using namespace std;

int main()
{
    // 7 - Crie um programa que desafia o usuário digitar um número maior que 40, que seja múltiplo de 5 e 7. Se ele conseguir, deve receber uma mensagem de parabéns.
    
    int respostaNum;
    printf("Escreva um número maior que 40 que támbem seja múltiplo de 5 e 7: ");
    scanf("%d", &respostaNum);
    printf("\n");
    
    int multiDe5 = respostaNum % 5;
    int multiDe7 = respostaNum % 7;
    
    if (respostaNum > 40 && multiDe5 == 0 && multiDe7 == 0){
        printf("Parabéns!!!");
    } else {
        printf("Bruh...");
    }
    
    return 0;
}
