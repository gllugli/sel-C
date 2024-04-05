/* 
1. Faça um programa que leia o ano de nascimento de uma pessoa e calcule sua idade. Após isso verifique se ela já tem idade para votar (16 anos ou mais). Mostre a mensagem informando a situação dela: 

a) A idade é xx anos e já pode votar. 
b) A idade é xx anos e não pode votar. 

ALTERAÇÕES: 

a. Na tela de saída, mostre também a data de nascimento.       

b. Mostre também a idade da pessoa. 
*/

#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main() {

    setlocale(LC_ALL, "portuguese");

    int ano = 2024, ano_nascimento, idade_voto;
    
    printf("\nQue ano você nasceu? ");
    scanf("%d", &ano_nascimento);

    idade_voto = ano - ano_nascimento;

    if (idade_voto >= 16) {
        printf("\nVocê nasceu no ano de %d, portanto você tem %d anos. Você já pode votar!", ano_nascimento, idade_voto);
    } else {
        printf("\nVocê nasceu no ano de %d, portanto você tem %d anos. Você não pode votar.", ano_nascimento, idade_voto);
    }

    return 0;
}