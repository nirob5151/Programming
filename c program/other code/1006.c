# include<stdio.h>
int main()
{
    double a,b,c, average;
    scanf("%lf %lf %lf",&a,&b,&c);
    average =(a/10 * 2 + b/10 * 3 + c/10 * 5);
    printf("MEDIA = %.1lf\n",average );
    return 0;
}