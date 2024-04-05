/*
8. Refaça o programa que calcule a média aritmética de um aluno que realizou duas avaliações. Além do valor da média, inclua na tela de saída uma das mensagens: “Aluno aprovado.” ou “Aluno reprovado.”. Considere que o aluno será aprovado com a média maior ou igual a cinco. 

Teste 1: Entrada: nota1 = 5, nota2 = 6   Saída: Média = 5.5    Aluno aprovado   
Teste 2: Entrada: nota1 = 5, nota2 = 2   Saída: Média = 3.5    Aluno reprovado   

ALTERAÇÕES: 

a. Mostre o valor da média aritmética com duas casas decimais. 
b. Altere a saída. Mostre a média e a mensagem na mesma linha:    Média do aluno: x.xxx           Aluno aprovado ou Aluno reprovado. 

c. Refaça-o considerando que a primeira prova tem peso três e a segunda, peso cinco. Ou seja, calcula a média ponderada do aluno. 

Teste 3: nota1 = 5, nota2=6, peso1=3, peso2=5      Saída: média = 5,625 

d. Deixe o programa mais interessante, permita que o usuário digite o valor dos pesos para usar no cálculo da média ponderada.
*/

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "portuguese");

    float nota1, nota2, media, media_ponderada;
    int peso_nota1, peso_nota2;

    printf("\nQual foi a sua primeira nota? ");
    scanf("%f", &nota1);

    printf("\nQual foi a sua segunda nota? ");
    scanf("%f", &nota2);

    printf("\nQual o peso da sua primeira prova? ");
    scanf("%d", &peso_nota1);

    printf("\nQual o peso da sua segunda prova? ");
    scanf("%d", &peso_nota2);

    media = (nota1 + nota2) / 2;
    media_ponderada = ((nota1 * peso_nota1) + (nota2 * peso_nota2)) / (peso_nota1 + peso_nota2);

    if (media > 5) {
        printf("\nA sua média é igual a: %.2f e sua média ponderada é igual a %.2f. Você foi aprovado.", media, media_ponderada);
    } else {
        printf("\nA sua média é igual a: %.2f e sua média ponderada é igual a %.2f. Você reprovou.", media, media_ponderada);
    }

    return 0;
}