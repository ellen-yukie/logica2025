#include <stdio.h>
 
int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    
    if(A>B && A>C){
        printf("%d eh o maior\n", A);
    }else if(C>A && C>B){
        printf("%d eh o maior\n", C);
    }else{
        printf("%d eh o maior\n", B);
    }

    return 0;
}
