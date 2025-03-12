#include<stdio.h>

int main()
{
    // 6 - Incremente o exercício anterior, agora informando se este é também um triângulo retângulo.
    
    int lado1, lado2, lado3, angulo;
    printf("Preciso que três números e um angulo sejam escritos para formar três lados de um triângulo: ");
    printf("\n");
    scanf("%d", &lado1);
    printf("\n");
    scanf("%d", &lado2);
    printf("\n");
    scanf("%d", &lado3);
    printf("\n");
    scanf("%d", &angulo);
    
    if (lado1 < lado2 + lado3 && lado2 < lado1 + lado3 && lado3 < lado1 + lado2){
        printf("Se está lendo essa mensagem, significa que o triângulo foi formado com sucesso e a condição esta funcionando!");
    } else {
        printf("Se esta lendo isso, significa que ou o triângulo não foi formado pois não teve as propriedades corretas \"o comprimento de cada lado de um triângulo é menor do que a soma dos comprimentos dos outros dois lados.\" ou a condição não esta funcionando");
    }
    printf("\n");
    if (lado1 == lado2 && lado2 == lado3 && lado1 != 0 && lado2 != 0 && lado3 != 0){
        printf("O triângulo que foi escrito é um equilátero");
    } else {
        if (lado1 == lado2 && lado3 != lado1 && lado3 != lado2){
            printf("O triângulo que foi escrito é um isósceles");
        } else {
            if (lado1 != lado2 && lado2 != lado3 && lado1 != lado3 && angulo == 90){
                    printf("O triângulo que foi escrito é um triângulo retângulo");
                } else { 
                if (lado1 != lado2 && lado2 != lado3 && lado1 != lado3){
                printf("O triângulo que foi escrito é um escaleno");
            } else {
                if (lado1 != lado2 && lado2 != lado3 && lado1 != lado3 && angulo == 90){
                    printf("O triângulo que foi escrito é um triângulo retângulo");
                } else {
                    if (lado1 == 0 && lado2 == 0 && lado3 == 0){
                        printf("Nenhum triângulo foi formado, pois todos os lados são 0...");
                    }
            }
        }
    }
    }
    return 0;
}
}
