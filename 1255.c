#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int main() {
    int N, maior, vezes[26];
    char linha[201];
    
    scanf("%d\n", &N);

    for(int i = 0; i < N; ++i){
        memset(vezes, 0, sizeof(vezes));

        scanf("%[^\n]\n", &linha);

        for(int j = 0; j < strlen(linha); ++j){
            if(isalpha(linha[j]))   vezes[tolower(linha[j]) - 'a']++;
        }

        maior = 0;
        for(int j = 0; j < 26; ++j){
            if(maior < vezes[j])  maior = vezes[j];
        }

        for(int j = 0; j < 26; ++j){
            if(vezes[j] == maior) printf("%c", j + 'a');
        }
        printf("\n");
    }

    return 0;
}
