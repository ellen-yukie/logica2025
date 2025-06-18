#include <stdio.h>

int main() {
    double valor;
    int reais, centavos;

    scanf("%lf", &valor);

    int totalCentavos = (int)(valor * 100 + 0.5);

    reais = totalCentavos / 100;
    centavos = totalCentavos % 100;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", reais / 100);
    reais %= 100;
    printf("%d nota(s) de R$ 50.00\n", reais / 50);
    reais %= 50;
    printf("%d nota(s) de R$ 20.00\n", reais / 20);
    reais %= 20;
    printf("%d nota(s) de R$ 10.00\n", reais / 10);
    reais %= 10;
    printf("%d nota(s) de R$ 5.00\n", reais / 5);
    reais %= 5;
    printf("%d nota(s) de R$ 2.00\n", reais / 2);
    reais %= 2;

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", reais);
    printf("%d moeda(s) de R$ 0.50\n", centavos / 50);
    centavos %= 50;
    printf("%d moeda(s) de R$ 0.25\n", centavos / 25);
    centavos %= 25;
    printf("%d moeda(s) de R$ 0.10\n", centavos / 10);
    centavos %= 10;
    printf("%d moeda(s) de R$ 0.05\n", centavos / 5);
    centavos %= 5;
    printf("%d moeda(s) de R$ 0.01\n", centavos);

    return 0;
}
