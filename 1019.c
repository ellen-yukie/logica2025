#include <stdio.h>
 
int main() {
    int N, X, Y, Z;
    scanf("%d", &N);
    
    X = N / 3600;
    N %= 3600;
    
    Y = N / 60;
    N %= 60;
    
    Z = N/1;
    N %=1;
    
    printf("%d:%d:%d\n", X, Y, Z);
    
    return 0;
}
