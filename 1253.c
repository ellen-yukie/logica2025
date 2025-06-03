#include <stdio.h>
#include <string.h>

int main (){
    int N, d;
    char texto[51];
    
    scanf("%d", &N);
    getchar();
    for (int i = 0; i < N; i++) {
        fgets(texto, sizeof(texto), stdin);
        texto[strcspn(texto, "\n")] = '\0'; 

        scanf("%d", &d);
        getchar();

        for (int j = 0; j < strlen(texto); j++) {
            texto[j] = ((texto[j] - 'A' - d + 26) % 26) + 'A';
        }

        printf("%s\n", texto);
    }

    return 0;
}
