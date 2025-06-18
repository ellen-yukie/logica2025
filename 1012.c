#include <stdio.h>
 
int main() {
    double A, B, C, V, W, X, Y, Z;
    scanf("%lf %lf %lf", &A, &B, &C);
    
    V=(A*C)/2;
    W=3.14159*C*C;
    X=((A+B)*C)/2;
    Y=B*B;
    Z=A*B;
    
    printf("TRIANGULO: %.3lf\n", V);
    printf("CIRCULO: %.3lf\n", W);
    printf("TRAPEZIO: %.3lf\n", X);
    printf("QUADRADO: %.3lf\n", Y);
    printf("RETANGULO: %.3lf\n", Z);
    
    return 0;
}
