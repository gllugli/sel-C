/* 
5. Elabore o programa que verifica se o valor inteiro fornecido pelo usuário é par ou ímpar. Analise o problema e verifique quais são os dados que o usuário precisa fornecer. 
*/

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "portuguese");

    int valor, divisao;

    printf("\nDigite um valor inteiro. ");
    scanf("%d", &valor);

    divisao = valor % 2;

    if(divisao == 0) {
        printf("O número digitado é par.");
    } else {
        printf("O número digitado é ímpar.");
    }

    return 0;
}