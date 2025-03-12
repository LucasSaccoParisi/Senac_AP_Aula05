#include<stdio.h>

int main()
{
    // 4 - Escrever um algoritmo que leia três valores inteiros e verifique se eles podem ser as medidas dos lados de um triângulo.
    // Propriedade: o comprimento de cada lado de um triângulo é menor do que a soma dos comprimentos dos outros dois lados.
    
    int lado1, lado2, lado3;
    printf("Preciso que três números sejam escritos para formar três lados de um triângulo: ");
    printf("\n");
    scanf("%d", &lado1);
    printf("\n");
    scanf("%d", &lado2);
    printf("\n");
    scanf("%d", &lado3);
    
    if (lado1 < lado2 + lado3 && lado2 < lado1 + lado3 && lado3 < lado1 + lado2){
        printf("Se está lendo essa mensagem, significa que o triângulo foi formado com sucesso e a condição esta funcionando!");
    } else {
        printf("Se esta lendo isso, significa que ou o triângulo não foi formado pois não teve as propriedades corretas \"o comprimento de cada lado de um triângulo é menor do que a soma dos comprimentos dos outros dois lados.\" ou a condição não esta funcionando");
    }
    
    return 0;
}
