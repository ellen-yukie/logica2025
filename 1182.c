#include <stdio.h>
 
int main() {
    int C, i, j;
    double M[12][12], soma=0;
    char T; 
    
    scanf("%d", &C);
    scanf(" %c", &T);
    
    for (i=0; i<12; i++){
        for (j=0; j<12; j++){
            scanf("%lf", &M[i][j]);
        }
    }
    
    for (i = 0; i < 12; i++) {
        soma += M[i][C];
    }
    
    if (T == 'S') {
        printf("%.1lf\n", soma);
    } else if (T == 'M') {
        printf("%.1lf\n", soma / 12);
    }
    
    return 0;
}
