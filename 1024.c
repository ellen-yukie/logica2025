#include <stdio.h>
#include <string.h>

int main() {
    int N;
    char linha[1001];

    scanf("%d%*c", &N); 

    while (N--) {
        fgets(linha, sizeof(linha), stdin);

        int len = strlen(linha);
        if (linha[len - 1] == '\n') linha[--len] = '\0';

        for (int i = 0; i < len; i++)
            if ((linha[i] >= 'a' && linha[i] <= 'z') || (linha[i] >= 'A' && linha[i] <= 'Z'))
                linha[i] += 3;

        for (int i = 0; i < len / 2; i++) {
            char tmp = linha[i];
            linha[i] = linha[len - 1 - i];
            linha[len - 1 - i] = tmp;
        }

        for (int i = len / 2; i < len; i++)
            linha[i]--;

        printf("%s\n", linha);
    }

    return 0;
}
