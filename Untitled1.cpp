#include <stdio.h>

double power(double a, int n) {
    if (n == 0) {
        return 1;
    } else if (n % 2 == 0) {
        double temp = power(a, n/2);
        return temp * temp;
    } else {
        double temp = power(a, (n-1)/2);
        return a * temp * temp;
    }
}

int main() {
    double a;
    int n;

    printf("Enter a: ");
    scanf("%lf", &a);
    printf("Enter n: ");
    scanf("%d", &n);

    double result = power(a, n);

    printf("%lf to the power of %d is %lf\n", a, n, result);

    return 0;
}

