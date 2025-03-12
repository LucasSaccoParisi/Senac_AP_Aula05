#include<stdio.h>

int main()
{
    // 2 - Escreva um programa que solicita um número inteiro. Exiba uma mensagem de erro se o número informado estiver entre 15 e 25 ou entre 45 e 50 (inclusive).
    
    int respostaNum;
    printf("Preciso que tu escreva um número: ");
    printf("\n");
    scanf("%d", &respostaNum);
    
    if (respostaNum >= 15 && respostaNum <= 25 || respostaNum >= 45 && respostaNum <= 50){
        printf("Erro...");
    } else {
        printf("Bruh...");
    }
    
    return 0;
}
