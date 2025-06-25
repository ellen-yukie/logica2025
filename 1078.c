#include <stdio.h>

int main (){
    
    int N, i, a;
    
    scanf("%d", &N);
    
    for(i = 1; i<11; i++){
       a = N * i;
       printf ("%d x %d = %d\n", i, N, a);
    } 

    return 0;
}
