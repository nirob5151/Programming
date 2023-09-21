#include<stdio.h>
int main()
{
    int result,Num;
    printf("fact number is:");
    scanf("%d",&Num);
    result= fact(Num);
    printf("fact(%d)=%d",Num,result);
}
int fact(n)

{
    if(n==1)
    return 1;
    else 
    return n*fact(n-1);
}
