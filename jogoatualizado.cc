
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

int main (){
    int sudoku[9][9], i, j, troca;

    FILE *arquivo = fopen("input2.txt", "r");  

    if (arquivo == NULL) {
    perror("Erro ao abrir o arquivo");
    return 1;
    }

for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
        fscanf(arquivo, "%d", &sudoku[i][j]);
    }
}
printf("==========SUDOKU=========\n");
printf("| %d %d %d | %d %d %d | %d %d %d |\n", sudoku[0][0], sudoku[0][1], sudoku[0][2], sudoku[0][3], sudoku[0][4], sudoku[0][5], sudoku[0][6], sudoku[0][7], sudoku[0][8]);
printf("| %d %d %d | %d %d %d | %d %d %d |\n", sudoku[1][0], sudoku[1][1], sudoku[1][2], sudoku[1][3], sudoku[1][4], sudoku[1][5], sudoku[1][6], sudoku[1][7], sudoku[1][8]);
printf("| %d %d %d | %d %d %d | %d %d %d |\n", sudoku[2][0], sudoku[2][1], sudoku[2][2], sudoku[2][3], sudoku[2][4], sudoku[2][5], sudoku[2][6], sudoku[2][7], sudoku[2][8]);
printf("|-----------------------|\n");
printf("| %d %d %d | %d %d %d | %d %d %d |\n", sudoku[3][0], sudoku[3][1], sudoku[3][2], sudoku[3][3], sudoku[3][4], sudoku[3][5], sudoku[3][6], sudoku[3][7], sudoku[3][8]);
printf("| %d %d %d | %d %d %d | %d %d %d |\n", sudoku[4][0], sudoku[4][1], sudoku[4][2], sudoku[4][3], sudoku[4][4], sudoku[4][5], sudoku[4][6], sudoku[4][7], sudoku[4][8]);
printf("| %d %d %d | %d %d %d | %d %d %d |\n", sudoku[5][0], sudoku[5][1], sudoku[5][2], sudoku[5][3], sudoku[5][4], sudoku[5][5], sudoku[5][6], sudoku[5][7], sudoku[5][8]);
printf("|-----------------------|\n");
printf("| %d %d %d | %d %d %d | %d %d %d |\n", sudoku[6][0], sudoku[6][1], sudoku[6][2], sudoku[6][3], sudoku[6][4], sudoku[6][5], sudoku[6][6], sudoku[6][7], sudoku[6][8]);
printf("| %d %d %d | %d %d %d | %d %d %d |\n", sudoku[7][0], sudoku[7][1], sudoku[7][2], sudoku[7][3], sudoku[7][4], sudoku[7][5], sudoku[7][6], sudoku[7][7], sudoku[7][8]);
printf("| %d %d %d | %d %d %d | %d %d %d |\n", sudoku[8][0], sudoku[8][1], sudoku[8][2], sudoku[8][3], sudoku[8][4], sudoku[8][5], sudoku[8][6], sudoku[8][7], sudoku[8][8]);
printf("|-----------------------|\n");

    for (i = 0; i < 9; i++){
        for (j = 0; j < 9; j++){
            if (sudoku[i][j] == 0){
                printf("Digite o valor que voce acha que esta na casa [%d][%d] é", i, j);

                scanf ("%d", &troca);

                sudoku[i][j] = troca;
            }
        }
    }

        if (deucerto(sudoku))
            printf("AEEEEEEEEEEEEEEE\n\n");
        else
            printf("ERROUUUU!\n\n");


    return 0;

}
