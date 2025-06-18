 #include <stdio.h>
 
int main() {
    int N;
    int F=1;
    scanf("%d", &N);
    if (N< 0) {
        return 1;
    }else {
        for (int i = 1; i <= N; i++) {
            F *= i;
        
        }    
    }
    printf("%d\n",  F);

    return 0;
}
