#include <stdio.h>
int main(){
    long long fib[61];
    int i, T, N;
    fib[0]=0;
    fib[1]=1;
    
    for(int i=2; i<61; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }
    
    scanf("%d", &T);
    
    for(i=0; i<T; i++){
        scanf("%d", &N);
        printf("Fib(%d) = %lld\n", N, fib[N]);
    }
    return 0;
}
