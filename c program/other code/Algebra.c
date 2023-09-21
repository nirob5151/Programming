#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    int result = a*a + 2*a*b + b*b;
    printf("%d\n", result);
    return 0;
}