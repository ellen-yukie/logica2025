#include <stdio.h>

int deucerto(int sudoku[9][9]) {
    int i, j, k, l;

    for (i = 0; i < 9; i++) {
        int cont[10] = {0};
        for (j = 0; j < 9; j++) {
            int num = sudoku[i][j];
            if (cont[num]) return 0;
            cont[num] = 1;
        }
    }

    for (j = 0; j < 9; j++) {
        int cont[10] = {0};
        for (i = 0; i < 9; i++) {
            int num = sudoku[i][j];
            if (cont[num]) return 0;
            cont[num] = 1;
        }
    }

    for (i = 0; i < 9; i += 3) {
        for (j = 0; j < 9; j += 3) {
            int cont[10] = {0};
            for (k = 0; k < 3; k++) {
                for (l = 0; l < 3; l++) {
                    int num = sudoku[i + k][j + l];
                    if (cont[num]) return 0;
                    cont[num] = 1;
                }
            }
        }
    }

    return 1;
}

int main() {
    int n, sudoku[9][9], i, j, instancia = 1;
    scanf("%d", &n);

    while (n--) {
        for (i = 0; i < 9; i++)
            for (j = 0; j < 9; j++)
                scanf("%d", &sudoku[i][j]);

        printf("Instancia %d\n", instancia++);
        if (deucerto(sudoku))
            printf("SIM\n\n");
        else
            printf("NAO\n\n");
    }

    return 0;
}
