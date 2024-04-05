/*

7. Elabore o programa que verifica se o usuário digitou a senha correta. Mostre a mensagem “Senha incorreta.” ou “Acesso liberado.”. 

Supondo que a senha correta seja 123. 

Teste 1: senha = 123        Resposta: Acesso liberado.            
Teste 2: senha = 111        Resposta: Senha incorreta. 

*/

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int senha_correta = 123, senha_digitada;

    printf("\nDigite a senha: ");
    scanf("%d", &senha_digitada);

    if (senha_digitada == senha_correta) {
        printf("\nAcesso Liberado.");
    } else {
        printf("\nSenha incorreta.");
    }

    return 0;
}