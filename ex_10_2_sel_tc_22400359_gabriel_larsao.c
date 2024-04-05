#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {

    setlocale(LC_ALL, "portuguese");

    float a, b, c, x1, x2;
    int delta;

    printf("\nDigite o valor de A: ");
    scanf("%f", &a);

    printf("\nDigite o valor de B: ");
    scanf("%f", &b);

    printf("\nDigite o valor de C: ");
    scanf("%f", &c);

    delta = (pow(b, 2) - 4 * a * c);

    x1 = ((-b + sqrt(delta)) / (2 * a));
    x2 = ((-b - sqrt(delta)) / (2 * a));

    if (delta < 0) {
        printf("Delta menor que zero, não há raízes reais.");
    } else if (delta > 0) {
        printf("As raízes são diferentes. A raíz x1 é igual a: %.1f e a raíz x2 é igual a: %.1f.", x1, x2);
    } else {
        printf("As raízes são iguais. A raíz x1 é igual a: %.1f e a raíz x2 é igual a: %.1f.", x1, x2);
    }
 
    return 0;
}
