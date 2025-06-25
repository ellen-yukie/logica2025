#include <stdio.h>

int main(){
    int i, a;
    float vetor[7];
    
    for(i=0; i<7; i++){
        scanf("%f", &vetor[i]);
        if(vetor[i] > 0){
            a = a + 1;
        }
    }
    
    printf("%d valores positivos\n", a);

    return 0;
}
