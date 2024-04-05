/*
2. Faça um programa que leia dois valores quaisquer e mostre o maior deles ou mostre a mensagem “Os valores são iguais.” TESTE: 

Teste 1: Entrada: 5 e 10                       
Teste 2: Entrada: 10 e 5                       
Teste 3: Entrada: 5 e 5                         

ALTERAÇÕES:  

Saída: O maior valor é 10  
Saída: O maior valor é 10 
Saída: Os valores são iguais. 

a. Se eles forem diferentes, mostre os valores digitados na ordem decrescente.  

b. Se eles forem iguais, mostre a mensagem e o valor digitado.
*/


#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main() {

    setlocale(LC_ALL, "portuguese");

    int a, b;

    printf("\nDigite um número inteiro: ");
    scanf("%d", &a);

    printf("\nDigite outro número inteiro: ");
    scanf("%d", &b);

    if (a > b) {
        printf("%d é maior que %d", a, b);
    } else if (b > a) {
        printf("%d é maior que %d", b, a);
    } else {
        printf("Os números digitados foram %d e %d, eles são iguais", a, b);
    }

    return 0;
}