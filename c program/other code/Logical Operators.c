#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the number:");
    scanf("%d %d",&a,&b);
    if(a&&b)
    {
        printf("1. Condition is  true\n");
    }else{
        printf("1. Condition is  not true\n");
    }
    if(a||b)
    {
        printf("2. Condition is  true\n");
    }else{
        printf("2 Condition is not true\n");
    }
    if(!(a||b))
    {
        printf("3. Condition is  true\n");
    }else{
        printf("3.Condition is not  true\n");
    }
    return 0;
    
    }