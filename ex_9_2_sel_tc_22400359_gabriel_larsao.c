/*
9. Projete o programa que leia um valor numérico e verifique se ele é maior ou igual a cem. 

Mostre uma das mensagens: “Valor maior ou igual a cem.” Ou “Valor menor que cem.” 

Teste 1: valor = 200    Saída: Valor maior ou igual a cem.                 
Teste 2: valor = 20     Saída: Valor menor que cem.                 
Teste 3: valor = 100    Saída: Valor maior ou igual a cem.                  

ALTERAÇÕES:    

a. Mostrar também o valor numérico lido, na tela de saída. 
*/

#include <stdio.h>
#include <locale.h>

int main() {
    
    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("\n Digite um número: ");
    scanf("%d", &num);

    if (num > 100) {
        printf("\nO valor digitado foi %d. Ele é maior que cem.", num);
    } else if (num < 100) {
        printf("\nO valor digitado foi %d. Ele é menor que cem.", num);
    } else {
        printf("\nO valor digitado foi %d. Ele é igual a cem.", num);
    }

    return 0;
}