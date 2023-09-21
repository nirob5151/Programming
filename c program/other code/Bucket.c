#include<stdio.h>
#include<stdbool.h>
#define MAX_BALL_VAL 100
 
int main() {
  int n, a[MAX_BALL_VAL] = {0}, max_bucket = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    int x;
    scanf("%d", &x);
    a[x - 1]++;
    if (a[x - 1] > max_bucket) {
      max_bucket = a[x - 1];
    }
  }
  printf("%d\n", max_bucket);
  return 0;
}