#include <stdio.h>
 
int main() {
    int F, H;
    double V, S;
    
    scanf("%d %d", &F, &H);
    scanf("%lf %lf", &V);
    
    S = H * V;
    
    printf("NUMBER = %d\n", F);
    printf("SALARY = U$ %.2lf\n", S);
    
    return 0;
}
