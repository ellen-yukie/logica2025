#include <stdio.h>

int main() {
    int x, y, N, rafael, beto, carlos;
    scanf("%d", &N);

    for(int i = 0; i < N; i++){
        scanf("%d", &x);
        scanf("%d", &y);
        
        rafael = (3 * x) * (3 * x) + y * y;
        beto = 2 * x * x  + (5 * y) * (5 * y);
        carlos = (-100 * x) + y * y * y;

        
        if(rafael >= beto && rafael >= carlos){
            printf("Rafael ganhou\n");
        }else if( beto>= rafael && beto >= carlos){
            printf("Beto ganhou\n");
        }else{
            printf("Carlos ganhou\n");
        }

        
    }
    
    return 0;
}
