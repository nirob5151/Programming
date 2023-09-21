#include <stdio.h>
#include <string.h>

#define MAX_N 100000

int N;
char A[MAX_N + 1], B[MAX_N + 1];

int main() {
scanf("%d", &N);
scanf("%s", A);
scanf("%s", B);

int cost = 0;
for (int i = 0; i < N; i++) {
if (A[i] >= 'a' && A[i] <= 'z') {
if (B[i] >= 'A' && B[i] <= 'Z' && B[i] == A[i] - 32) {
cost++;
} else {
cost += A[i] - 'a' + 1;
}
}
}
printf("%d\n", cost);
return 0;
}