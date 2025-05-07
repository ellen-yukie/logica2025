#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, p, A, pi, r, R;
    while (scanf("%lf %lf %lf", &a, &b, &c) == 3) {
        p = (a + b + c) / 2;
        A = sqrt(p * (p - a) * (p - b) * (p - c));
        pi = 3.141592653589793;
        r = A / p;
        R = (a * b * c) / (4 * A);

        printf("%.4lf %.4lf %.4lf\n", pi * R * R - A, A - pi * r * r, pi * r * r);
    }
    return 0;
}
