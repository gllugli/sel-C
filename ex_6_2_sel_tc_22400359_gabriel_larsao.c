/*
6. Analise o resultado de uma transação comercial. Verifique a situação final do comerciante trabalhando com os valores lidos, ou seja, o preço de compra e o preço de venda. 

Gere a tela de saída com uma das seguintes mensagens: “Teve lucro.”, “Teve prejuízo.” ou “Os valores são iguais.”. 

Utilize os valores abaixo para testar seu programa: 
Teste 1: Entrada: compra = 1000, venda = 1200     Saída: Teve lucro. 
Teste 2: Entrada: compra = 1200, venda = 1000     Saída: Teve prejuízo. 
Teste 3: Entrada: compra = 1000, venda = 1000     Saída: Os valores são iguais. 

Alterações: Na saída, mostre também o valor do preço de compra e do preço de venda.
*/

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "portuguese");

    float compra, venda;

    printf("\nQual foi o valor pago pela peça? ");
    scanf("%f", &compra);

    printf("\nPor quanto foi vendido esta mesma peça? ");
    scanf("%f", &venda);

    if (compra < venda) {
        printf("\nVocê comprou a peça por %.2f e vendeu ela por %.2f. Você teve lucro!", compra, venda);
    } else if (compra > venda) {
        printf("\nVocê comprou a peça por %.2f e vendeu ela por %.2f. Você saiu no prejuízo.", compra, venda);
    } else {
        printf("\nVocê comprou a peça por %.2f e vendeu ela por %.2f. Você não teve nem lucro nem prejuízo", compra, venda);
    }

    return 0;
}