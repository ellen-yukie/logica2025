#include <stdio.h>

int main() {
    int L, i, j;
    double n[12][12], soma = 0.0;
    char T;

    scanf("%d", &L);
    scanf(" %c", &T);

    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            scanf("%lf", &n[i][j]);
        }
    }

    for (j = 0; j < 12; j++) {
        soma += n[L][j];
    }

    if (T == 'S') {
        printf("%.1lf\n", soma);
    } else if (T == 'M') {
        printf("%.1lf\n", soma / 12.0);
    }

    return 0;
}
