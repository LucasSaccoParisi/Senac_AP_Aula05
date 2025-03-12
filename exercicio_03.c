#include<stdio.h>

int main()
{
    // 3 - Faça um algoritmo que receba um número e mostre uma mensagem caso este número seja maior que 80, menor que 25 ou igual a 40.
    
    int respostaNum;
    printf("Preciso que tu escreva um número: ");
    printf("\n");
    scanf("%d", &respostaNum);
    
    if (respostaNum > 80 || respostaNum < 25 || respostaNum == 40){
        printf("Se está lendo isto, significa que a condição está funcionando!");
    } else {
        printf("Se está lendo isto, significa que o else está funcionando...");
    }
    
    return 0;
}
