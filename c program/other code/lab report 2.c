#include <stdio.h>
int main()
{
    int a,b,c,d;
    int sum,sub,mult;
    float div;
    printf("Enter The Number Separated By Coma:");
    scanf("%d,%d,%d,%d",&a,&b,&c,&d);

    sum=a+b+c+d;
    sub=a-b;
    mult=c*d;
    div= (float)(a-b)/(c*d);

    printf("sum is:%d\n",sum);
    printf("sub is :%d\n",sub);
    printf("mult is:%d\n",mult);
    printf("div:%f",div);

    return 0;
}
