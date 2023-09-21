#include <stdio.h>
int main()
{
    double A,B,Media;
    scanf("%lf %lf",&A,&B);
    Media=(A*3.5+B*7.5)/(3.5+7.5);
    printf("MEDIA = %.5LF\n",Media);
    return 0;
}
