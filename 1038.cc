#include <stdio.h>

int main (){
    
    int N, qtd; 
    float total=0;
    
    scanf ("%d %d", &N, &qtd);
    
    if(N == 1) {
        total = qtd * 4;
    } else if (N == 2){
        total = qtd * 4.5;
    } else if (N==3){
        total = qtd * 5;
    } else if (N == 4) {
        total = qtd * 2;
    } else if (N ==5){
        total = qtd * 1.5;
    }
    
    printf ("Total: R$ %.2f\n", total);
    
    return 0;
}
