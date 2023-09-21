#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value:");
    scanf("%d,%d",&a,&b);
    c-a&b;
    printf("1.value of c is:%d\n",c);
    c=a||b;
    printf("2.value of c is:%d\n",c);
    c=a^b;
    printf("3.value of c is:%d\n",c);
    c=~a;
    printf("value of c is:%d\n",c);
    c=a<<2;
    printf("4.value of c is:%d\n",c);
    c=a>>2;
    printf("value of c is:%d\n",c);
    return 0;


}