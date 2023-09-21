#include <stdio.h>


int main()

{
    int num1, num2;
    int sum,sub,multi,mod;
    float div;
    printf("Input any two numbers Separated by comma:");
    scanf("%d,%d",&num1,&num2);

    sum=num1+num2;
    sub=num1-num2;
    multi=num1*num2;
    mod=num1/num2;
    printf("The sum of the given number:%d\n",sum);
    printf("The difference of the given numbers:%d\n",sub);
    printf("The Product of the given numbers:%d\n,multi");
    printf("The quotient of the given numbers:%f\n",div);

    return 0;
}
