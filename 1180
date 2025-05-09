#include <stdio.h>
 
int main() {
    int N,i;
    scanf("%d", &N);
    
    int valor[1000];
    
    for(i=0; i<N; i++){
        scanf("%d", &valor[i]);
    }
    
    int min= valor[0];
    int posicao=0;

    for(i=1; i<N; i++){
        if(min > valor[i]){ 
            min = valor[i]; 
            posicao = i;
        }
       
    }
     printf("Menor valor: %d\n", min);
     printf("Posicao: %d\n", posicao); 
     
    return 0;
}
