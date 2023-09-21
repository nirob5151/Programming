#include<stdio.h>
int main()
{
    int a=21,b=10,c;
    if(a==b)
    {
        printf("1. a is equal to b\n");
    }else{
        printf("1. a is not equal to b\n");
    }
    if(a<b)
    {
        printf("2 a is less than b\n");
    }else{
        printf("2 a is not less than b\n");
    }
    if(a>b)
    {
        printf("3. a is greater than b\n");
    }else{
        printf("3. a is not greater than b\n");
    }
    a=5;
    b=20;

    if(a<=b)
    {
        printf("4. a is either less than or equal to b\n");
    }
    if (b>=a)
    {
        printf("5.a is either greater than or equal to b\n");
    }
    
    }