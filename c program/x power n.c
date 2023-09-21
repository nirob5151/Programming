#include <stdio.h>
int main() {
    double x;
    int n;

    printf("Enter the value of x: ");
    scanf("%lf", &x);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    double result = power(x, n);

    printf("raised to the power of is (%.2lf^%d) :%lf\n", x, n, result);

    return 0;
}
 power(double x, int n) {
    if (n == 0)
        return 1;
    else  
        return x * power(x, n - 1);
   // else
        //return 1 / (x * power(x, -n - 1));
}
