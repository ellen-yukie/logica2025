#include <stdio.h>
 
int main() {
    int qtda,qtdb;
    double unia, unib, valora, valorb, total;
    
    scanf("%lf", &valora);
    scanf("%d", &qtda);
    scanf("%lf", &unia);
    scanf("%lf", &valorb); 
    scanf("%d", &qtdb);
    scanf("%lf", &unib);
    scanf("%lf", &total);
    
    valora=qtda*unia;
    valorb=qtdb*unib;
    total=valora+valorb;

    printf("VALOR A PAGAR: R$ %.2lf\n", total);
    return 0;
}
