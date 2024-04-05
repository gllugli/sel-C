/*
3. Elabore o programa que leia um número qualquer e verifique se ele é positivo, nulo ou negativo. 

Teste 1: número = 4            
Teste 2: número = 0            
Teste 3: número = -4           

ALTERAÇÕES:  

Saída: Número Positivo  
Saída: Número Nulo  
Saída: Número Negativo 

a. Além da mensagem, mostre também o número digitado pelo usuário. 

b. Se o número for positivo, mostre a mensagem, o valor da variável e o dobro de seu valor; 

Se negativo, mostre a mensagem, o valor da variável e o seu triplo de seu valor; 

Se nulo, mostre a mensagem, o valor da variável número.
*/

#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main() {

    setlocale(LC_ALL, "portuguese");

    int a, dobro, triplo;

    printf("\nDigite um número inteiro: ");
    scanf("%d", &a);

    dobro = a * 2;
    triplo = a * 3;

    if (a > 0) {
        printf("O número digitado foi: %d. Ele é positivo. O dobro deste número é: %d.", a, dobro);
    } else if( a < 0) {
        printf("O número digitado foi: %d. Ele é negativo. O triplo deste número é: %d.", a, triplo);
    } else {
        printf("O número digitado foi: %d. Ele é nulo.", a);
    }
    return 0;
}