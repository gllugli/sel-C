/*
4. Construa o programa que calcule o peso ideal de uma pessoa. 

Analise o problema e verifique quais são os dados que o usuário precisa fornecer (digitar). 

- Se homem, o peso ideal é calculado assim: (72,7. altura) - 58; 
- Se mulher, o peso ideal é calculado assim: (62,1. altura) - 44,7. 

Teste 1: 
Entrada: altura = 1.70 e gênero = 1 
Saída: peso ideal = 65.59 Kg 

Teste 2: Entrada: altura = 1.70 e gênero = 2 
Saída: peso ideal = 60.8699999 Kg 

ALTERAÇÕES: 

a. Mostre o peso com duas casas decimais. 

b. Troque a entrada para ‘m’ ou ‘f’. 
Teste 3: altura = 1.8     genero = m           
Saída: peso ideal = 72.86 Kg  

c. Mostre uma mensagem de erro se ele digitar valor de gênero diferente de ‘m’ ou ‘f’.
*/

#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main() {

    setlocale(LC_ALL, "portuguese");

    float altura, peso_masc, peso_femin;
    char genero;

    printf("\nQual sua altura? ");
    scanf("%f", &altura);

    
    printf("\nQual seu gênero? Masculino(M) Feminino(F). ");
    genero = getchar();

    if (genero != 'C' && genero != 'C') {
        printf("Digite um caractere válido.");
    }

    peso_masc = (72.7 * altura) - 58;

    peso_femin = (62.1 * altura) - 44.7;

    if (genero == 1) {
        printf("Como você é homem, seu peso ideal é: %.2f.", peso_masc);
    } else {
        printf("Como você é mulher, seu peso ideal é: %.2f.", peso_femin);
    }

    return 0;
}

